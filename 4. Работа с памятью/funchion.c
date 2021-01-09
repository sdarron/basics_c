#include <stdio.h>
#include <math.h> 

/*
** 4.10 Найти наибольшее и наименьшее значения функции y=3x+2+x-4
** на заданном интервале [a,b]. Х изменяется с шагом 0.1.
*/

int main()
{
    float min;
    float max;
    float a;
    float b;

    min = 0;
    max = 0;
    a = 0;
    b = 0;
    printf("Input funchion interval [a, b]:");
    scanf("%f%f", &a, &b);
    min = 3 * (ceilf(a * 10) / 10) + 2 + (ceilf(a * 10) / 10) - 4;
    max = 3 * (ceilf(b * 10) / 10) + 2 + (ceilf(b * 10) / 10) - 4;
    printf("Min = %.1f, max = %.1f", min, max);
    return (0);
}