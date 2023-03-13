#include <iostream>
#include <initializer_list> // Pt initializer_list
using namespace std;
class Sort
{
private:
    long long int *array;
    unsigned int size;

public:
    Sort(unsigned int size, int min, int max);
    Sort(long long int arr[], unsigned int size);
    Sort(unsigned int count, ...);
    Sort(initializer_list<int> init_list);
    Sort(const char *str);

    // Sorting algorithms
    void InsertSort(bool ascendent = false);
    // void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);

    int GetElementsCount();

    int GetElementFromIndex(int index);

    void Print();
};