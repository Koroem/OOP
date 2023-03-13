#include "Sort.h"
#include <iostream>
using namespace std;

int main()
{
    Sort arr1(10, 0, 100);
    Sort arr2(10, -100, 100);
    Sort arr3(10, 0, 1);

    long long int arr4_0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned int n = 10;

    Sort arr4(arr4_0, n);
    Sort arr5(10, -1, -2, -3, -4, -5, -6, -7, -8, -10, -9);
    Sort arr6({1, 2, 3, 4, 5, 6});
    Sort arr7("10, 40, 100, 5, 70");

    cout
        << "Arr1: ";
    arr1.Print();
    cout << "Arr2: ";
    arr2.Print();
    cout << "Arr3: ";
    arr3.Print();
    cout << "Arr4: ";
    arr4.Print();
    cout << "Arr5: ";
    arr5.Print();
    cout << "Arr6: ";
    arr6.Print();
    cout << "Arr7: ";
    arr7.Print();

    cout << endl
         << endl;

    cout << "Arr1 Sorted asc: ";
    arr1.BubbleSort(1);
    arr1.Print();

    cout << "Arr2 Sorted asc: ";
    arr2.BubbleSort(1);
    arr2.Print();

    cout << "Arr3 Sorted asc: ";
    arr3.BubbleSort(1);
    arr3.Print();

    cout << "Arr4 Sorted asc: ";
    arr4.BubbleSort(1);
    arr4.Print();

    cout << "Arr5 Sorted asc: ";
    arr5.BubbleSort(1);
    arr5.Print();

    cout << "Arr6 Sorted asc: ";
    arr6.BubbleSort(1);
    arr6.Print();

    cout << "Arr7 Sorted asc: ";
    arr7.BubbleSort(1);
    arr7.Print();

    cout << endl
         << endl;

    cout << "Arr1 Sorted desc: ";
    arr1.BubbleSort();
    arr1.Print();

    cout << "Arr2 Sorted desc: ";
    arr2.BubbleSort();
    arr2.Print();

    cout << "Arr3 Sorted desc: ";
    arr3.BubbleSort();
    arr3.Print();

    cout << "Arr4 Sorted desc: ";
    arr4.BubbleSort();
    arr4.Print();

    cout << "Arr5 Sorted desc: ";
    arr5.BubbleSort();
    arr5.Print();

    cout << "Arr6 Sorted desc: ";
    arr6.BubbleSort();
    arr6.Print();

    cout << "Arr7 Sorted asc: ";
    arr7.BubbleSort();
    arr7.Print();
}