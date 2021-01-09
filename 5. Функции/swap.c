#include <stdio.h>

/*
** 5.1 Написать функцию void swap(int *a, int *b), меняющую
** значения переменных a и b. Продемонстрировать ее работу на двух
** числах, введенных с клавиатуры.
*/

void swap(int *a, int *b);

int main()
{
    int a;
    int b;
    
    printf("Input numbers A: ");
    scanf("%d", &a);
    printf("Input numbers B: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf ("The value of the numbers changed: A - %d, B - %d", a, b);
    return (0);
}

void swap(int *a, int *b)
{
    int num;
    num = *a;
    *a = *b;
    *b = num;
}
