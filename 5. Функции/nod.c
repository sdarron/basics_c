#include <stdio.h>

/*
** 5.13 Написать функцию int nod(int a, int b), вычисляющую
** наибольший общий делитель чисел с помощью алгоритма Евклида.
** Используя функцию nod, написать функцию int nok(int a, int b),
** вычисляющую наименьшее общее кратное по формуле.
** Наименьшим общим кратным (НОК) двух чисел a и b называется
** наименьшее число, которое делится и на a, и на b без остатка.
** Используя эти функции, написать программу, выводящую НОД
** и НОК введенных пользователем чисел.
*/

int nod(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        if (b > a)
            b = b - a;
    }
    return (a);
}

int nok(int a, int b)
{
    return ((a * b) / nod(a,b));
}

int main()
{
    int a;
    int b;

    printf ("Enter two namber: ");
    scanf ("%d%d", &a, &b);
    printf ("");
    printf ("Greatest common divisor is %d.\n", nod(a, b));
    printf ("Smallest common multiple is %d.\n", nok(a, b));
    return (0);
}