#include "stdio.h"
#include "jmath.h"

#define MAX_INT  (int) 0x7FFFFFFF

void jmath_info()
{
    printf("JMATH LIBRARY, just a example of library\n");
}

int jmath_add(int a, int b)
{
    return a + b;
}

int jmath_sub(int a, int b)
{
    return a - b;
}

int jmath_mul(int a, int b)
{
    return a * b;
}

int jmath_div(int a, int b)
{
    if (b == 0)
    {
        printf("jmath > error: div to 0\n");
        return MAX_INT;
    } 
    return a / b;
}