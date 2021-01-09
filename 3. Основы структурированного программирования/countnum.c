#include <stdio.h>

/*
** 3.24 Подсчитать количество цифр вводимого с клавиатуры целого 
** неотрицательного числа.
*/ 

int main()
{
    int num;
    int i;

    i = 1;
    num = 0;
    printf("Input number: ");
    scanf("%d",&num);
    while (num > 10)
    {
        num = num/10;
        i++;
    }
    printf("Count numeral - %d", i);
    return (0);
}