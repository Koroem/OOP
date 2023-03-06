#include "Math.h"
#include <iostream>

using namespace std;

int main()
{

    Math test;

    cout << test.Add(50, 50) << endl;
    cout << test.Add(50, 50, 50) << endl;
    cout << test.Add(150.123, 50.654) << endl;
    cout << test.Add(4, 75, 75, 50, 50) << endl;
    cout << endl;

    cout << test.Mul(50, 6) << endl;
    cout << test.Mul(10, 5, 7) << endl;
    cout << test.Mul(20.00001, 20.00002) << endl;
    cout << test.Mul(30.00011, 5.000002, 3.0001) << endl;
    cout << endl;

    cout << test.Add("abc", "def") << endl;
    cout << test.Add("101", "010") << endl;
}