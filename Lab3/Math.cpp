#include "Math.h"
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

/* pt va_list, va_start, va_arg, va_end */
#include <cstdarg>

int Math::Add(int a, int b)
{
    return a + b;
}

int Math::Add(int a, int b, int c)
{
    return a + b + c;
}

int Math::Add(double a, double b)
{

    return (int)(a + b);
}

int Math::Add(double a, double b, double c)
{
    return (int)(a + b + c);
}

int Math::Mul(int a, int b)
{
    return a * b;
}

int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}

int Math::Mul(double a, double b)
{
    return (int)(a * b);
}

int Math::Mul(double a, double b, double c)
{
    return (int)(a * b * c);
}

int Math::Add(int count, ...) /* count=nr of arguments*/
{
    if (count < 1)
        cout << ("Numar incorect de parametrii\n");

    int sum = 0;

    va_list args;          // declarare obiect de tip va_list
    va_start(args, count); // initializare

    for (int it = 0; it < count; it++)
        sum += va_arg(args, int); // adunam urmatorul argument ca int

    va_end(args);

    return sum;
}

/*char *Math::Add(const char *x, const char *y)
{
    if (x == nullptr || y == nullptr)
        return nullptr;
    int length = (int)(strlen(x) + strlen(y));

    char *result = new char[++length];
    strcpy(result, x);
    strcat(result, y);

    return result;
} */

char *Math ::Add(const char *x, const char *y)
{
    if (x == nullptr || y == nullptr)
        return nullptr;

    int sum = atoi(x) + atoi(y);

    if (sum < 0)
    {

        char *sir = new char[(int)(floor(log10(-sum))) + 3]; // suma de numere negative
        itoa(sum, sir, 10);
        return sir;
    }
    if (sum > 0)
    {
        char *sir = new char[(int)(floor(log10(sum))) + 2]; // suma de numere pozitive
        itoa(sum, sir, 10);
        return sir;
    }
    if (sum == 0)
    {
        char *sir = new char[2]; // suma da 0
        itoa(sum, sir, 10);
        return sir;
    }
}
