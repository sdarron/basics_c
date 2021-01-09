#include <stdio.h>

/*
** 4.8 Целое число называется совершенным, если сумма его
** делителей, включая 1 (но не само число), равна этому числу.
** Например, 6 является совершенным числом, поскольку 6=1+2+3.
** Напишите программу, которая определяет, является ли введенное
** пользователем число совершенным.
*/

int main()
{
    int num;
    int i;
    int l;
    
    l = 0;
    i = 1;
    num = 0;
    printf("Input number: ");
    scanf("%d", &num);
    
    while (i < num)
    {
        if(num % i == 0)
            l = l + i;
        i++;
    }
    if (l == num)
        printf("Nember is perfect.");
    else
        printf("Nember is not perfect.");
    return (0);
}