#include <stdio.h>

/*
** 5.6 Написать функцию double power(double x, int n), возводя-
** щую число x в степень n. Использовать эту функцию в программе,
** возводящей в степень действительные числа. Число x и показатель
** степени n вводятся с клавиатуры.
*/

double power(double x, int n);

double power(double x, int n)
{
    int i;
    int rez;

    rez = 1;
    i = 0;
    while (i < n)
    {
        rez = x * rez;
        i++;
    }
    return (rez);
}

int main ()
{
    double x;
    int n;
    
    printf("Input number: ");
    scanf("%lg", &x);
    printf("Input power: ");
    scanf("%d", &n);
    printf("The number %lg in power %d is %lg", x, n, power(x, n));
    return (0);
}

