#include "Sort.h"
#include <stdarg.h> // Pt va_list
#include <iostream>
#include <time.h>           // Used for generating seed
#include <cstdlib>          // For rand() api
#include <initializer_list> // Pt initializer_list
#include <cstring>          //Pt strtok
#include <stdlib.h>         /* atoi */
using namespace std;

Sort::Sort(unsigned int size, int min, int max)
{
    array = new long long[size];
    srand(time(NULL)); // Initializare seed pt random
    for (int contor = 0; contor < size; contor++)
    {
        /* (max-min+1) = count(min,max)
            rand()%(max-min+1)=[0,max-min]
            min+[0,max-min]=[min,max]
        */
        array[contor] = min + rand() % (max - min + 1);
    }
    this->array = array;
    this->size = size;
}
Sort::Sort(long long int arr[], unsigned int size)
{
    array = new long long int[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = arr[i];
    }
    this->size = size;
}
Sort::Sort(unsigned int count, ...)
{
    va_list numbers;
    va_start(numbers, count);
    array = new long long int[count];
    this->size = count;

    for (int i = 0; i < count; i++)
    {
        int element = va_arg(numbers, int);
        array[i] = element;
    }
    va_end(numbers);
}
/* initializer_list<type> is an array of objects of a constant type*/
Sort::Sort(initializer_list<int> init_list)
{
    int cont = -1;
    this->size = init_list.size();
    array = new long long int[init_list.size()];
    for (auto element : init_list)
    {
        cont++;
        array[cont] = element;
    }
}

Sort::Sort(const char *str)
{
    int count = 0, iterator = -1;
    /* can`t use const char str in strtok*/
    char *str_cpy = new char[strlen(str) + 1];
    strcpy(str_cpy, str);

    // cout << "str" << str_cpy;
    char *p = strtok(str_cpy, ",");

    while (p != NULL)
    {
        count++;
        p = strtok(NULL, ",");
    }
    array = new long long int[count];
    this->size = count;

    /* ???? */
    strcpy(str_cpy, str);

    p = strtok(str_cpy, ",");
    while (p != NULL)
    {
        iterator++;
        array[iterator] = atoi(p);
        p = strtok(NULL, ",");
    }
}

/* la fiecare pas se muta elementul curent la stanga atat timp cat este mai mic*/
void Sort::InsertSort(bool ascendent)
{
    for (unsigned int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && (ascendent ? array[j] > key : array[j] < key))
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
/* la fiecare pas se gaseste elementul de pe pozitia array(size)-pas */
void Sort::BubbleSort(bool ascendent)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ascendent ? array[j] > array[j + 1] : array[j] < array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

void Sort::Print()
{
    for (unsigned int contor = 0; contor < this->size; contor++)
    {
        cout << array[contor] << " ";
    }
    cout << endl;
}

int Sort::GetElementsCount()
{
    return (int)this->size;
}

int Sort::GetElementFromIndex(int index)
{
    return (int)this->array[index];
}
