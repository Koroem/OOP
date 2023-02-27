#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{
    this->count = 0;
}
bool NumberList::Add(int x)
{
    if (this->count >= 10)
        return false;
    this->numbers[this->count++] = x;
    return true;
}
void NumberList::Sort()
{
    for (int i = 0; i < this->count - 1; i++)
        for (int j = i + 1; j < this->count; j++)
            if (this->numbers[j] < this->numbers[i])
            {
                int aux = this->numbers[j];
                this->numbers[j] = this->numbers[i];
                this->numbers[i] = aux;
            }
}
void NumberList::Print()
{
    for (int i = 0; i < this->count; i++)
        std::cout << this->numbers[i] << ' ';
    std::cout << std::endl;
}
