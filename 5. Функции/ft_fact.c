#include <stdio.h>

/*
** Написать функцию int ft_fact(int n), вычисляющую
** факториал переданного целого числа. Используя данную функцию
** вывести факториалы чисел от 1 до 10.
*/

int ft_fact(int n);

int ft_fact(int n)
{
    int b;
    b = 0;

    b = n - 1;    
    while (b >= 1)
    {
        n = n * b;
        b--;
    }
    return (n);
}

int main()
{
    int n;

    n = 1;
    while (n <= 10)
    {
        printf("The factorial number %d is %d.\n", n, ft_fact(n));
        n++;

    }
    return (0);
}


