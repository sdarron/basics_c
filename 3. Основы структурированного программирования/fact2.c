#include <stdio.h>

/*
** 3.19 Даны два целых числа A и B (A < B).
** Найти произведение всех целых чисел от A до B включительно.
*/

int main()
{
    int a;
    int b;
    int c;

    a = 2;
    b = 6;
    c = 0;
    c = a;
    while(b > c)
    {
        a = a * b;
        b--;
    }
    printf("Factorial = %d", a);
    return (0);
}