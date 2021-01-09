#include <stdio.h>
#include <math.h>

/*
** 5.2 Написать функцию double circle_length(double radius).
** Спомощью этой функции написать программу, запрашивающую
** у пользователя радиус и вычисляющую длину окружности.
*/

double circle_length(double radius);

int main()
{
    double rad;
    printf("Input radius: ");
    scanf("%lg", &rad);
    printf("Circle lengtn is %lg\n", circle_length(rad));    
    return (0);
}

double circle_length(double radius)
{
    double rez;
    rez = 2 * radius * M_PI;
    return rez;
}