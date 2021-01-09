#include <stdio.h>

/*
** 3.25 Шестизначный номер билета называют «счастливым»,
** если в его записи сумма первых трех цифр равна сумме последних трех.
** Программа спрашивает у пользователя шестизначный номер билета
** и проверяет, является ли он счастливым.
*/

int main()
{
    int num;

    num = 0;
    printf("Imput 6-digit number ");
    scanf("%d", &num);
    if((num % 10) + (num / 10 % 10) + (num / 100 % 10) == (num / 100000 % 10) + (num / 10000 % 10) + (num / 1000 % 10))
        printf("You ticket is happy!");
    else
        printf("You ticket is not happy!");
    return (0); 
}