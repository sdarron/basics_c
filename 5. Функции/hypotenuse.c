#include <stdio.h>
#include <math.h>

/*
** 5.5 Написать функцию double hypotenuse (double a, double b),
** которая вычисляет длину гипотенузы прямоугольного треугольника
** по двум другим сторонам. Используйте эту функцию в программе для
** определения длины гипотенузы треугольников, стороны которых
** пользователь вводит с клавиатуры.
*/

double hypotenuse(double a, double b);

double hypotenuse(double a, double b)
{
    return (sqrt(a * a + b * b));
}

int main()
{
    double a;
    double b;

    a = 0;
    b = 0;

    printf("Input the legs of the triangle: ");
    scanf("%lg%lg", &a, &b);
    printf("The hypotenuse is %lg.\n", hypotenuse(a, b)); 
    return (0);
}