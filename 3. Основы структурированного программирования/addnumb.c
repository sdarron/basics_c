#include <stdio.h>

/*
** 3.23 Подсчитать сумму всех нечетных чисел от 1 до 99.
*/

int main()
{
    int a;
    int n;
    
    a = 0;
    n = 1;
    while (n <= 99)
    {   
        a = a + n;
        n = n + 2;
    }
    printf ("%d", a);
    return (0);
}