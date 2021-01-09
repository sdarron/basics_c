#include <stdio.h>

/*
** 6.5 Ввести с клавиатуры два числа, а затем вывести результат
** деления первого на второе с точностью до ближайшего целого, до
** десятых, сотых, тысячных и до десятитысячных. Для округления
** использовать соответствующее поле форматной строки.
*/

int main()
{
    float a;
    float b;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    quotient = a / b;
    printf("%.0f\n", quotient);
    printf("%.1f\n", quotient);
    printf("%.2f\n", quotient);
    printf("%.3f\n", quotient);
    printf("%.4f\n", quotient);
    return (0);
}
