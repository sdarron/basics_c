#include <stdio.h>

/*
** 5.9 Написать функцию int fib(int n), вычисляющую n-е число
** Фибоначчи. С ее помощью вывести все числа Фибоначчи от 1 до 10.
*/

int fib(int n);

int fib(int n)
{
    int a;
    int b;
    int c;
    int i;

    a = 0;
    b = 1;
    c = 1;
    i = 3;
    if (n == 0)
        return (0);
    if (n == 1 || n == 2)
        return (1);
    while (i <= n)
    {
        a = b + c;
        c = b;
        b = a;
        i++;
    }
    return (b);  
}

int main ()
{
    int k;
    k = 0;
    while (k <= 10)
    {
        printf("%d ", fib(k));
        k++;
    }
    return (0);
}