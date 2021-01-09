#include <stdio.h>

/*
** 5.7 Написать функцию double minval(double a, double b,
** double c), которая возвращает наименьшее из трех чисел с плаваю-
** щей точкой.
*/

double minval(double a, double b, double c);

double minval(double a, double b, double c)
{
    double min;

    min = b;
    if (a < b)
        min = a;
    if (c < min)
        min = c;
    return (min);
}

int main()
{
    double a;
    double b;
    double c;

    printf("Input three value: ");
    scanf("%lg%lg%lg", &a, &b, &c);
    printf("Minimum value is %lg.\n", minval(a, b, c));
    return (0);
}