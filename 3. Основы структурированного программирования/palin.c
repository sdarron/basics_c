#include <stdio.h>

/*
** Напишите программу, которая считывает с клавиатуры пятизначное целое число и определяет
** является ли оно палиндромом.
*/

int main()
{
    int num;

    printf("Input 5digit number: ");
    scanf("%d", &num);
    if ((num % 10 == (num/10000)%10) && ((num/10)%10 == (num/1000)%10))
        printf("Number is polinom.");
    else
        printf("Number is not polinom.");
    return(0);
}