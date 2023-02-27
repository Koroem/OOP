#include "NumberList.h"
#include <math.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h> /* srand, rand */
using namespace std;
int main()
{
    cout << endl;

    NumberList l1, l2, l3, l4;
    int random_number;

    l1.Init();
    l2.Init();
    l3.Init();
    l4.Init();

    for (int c1 = 0; c1 < 4; c1++)
    {
        for (int c2 = 0; c2 < 10; c2++)
        {
            /* generate secret number between 1 and 100: */
            random_number = rand() % 100 + 1;
            switch (c1)
            {
            case 0:
                l1.Add(random_number);
                break;
            case 1:
                l2.Add(random_number);
                break;
            case 2:
                l3.Add(random_number);
                break;
            case 3:
                l4.Add(random_number);
            }
        }
    }

    l1.Print();
    l2.Print();
    l3.Print();
    l4.Print();

    l1.Sort();
    l2.Sort();
    l3.Sort();
    l4.Sort();

    cout << "Sorted :" << endl;

    l1.Print();
    l2.Print();
    l3.Print();
    l4.Print();
}