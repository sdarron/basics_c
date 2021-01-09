#include <stdio.h>

/*
** 4.1 Для числа, введенного пользователем,
** напечатать в порядке возрастания все его делители.
*/

int main()
{
    int num;
    int i;
    
    i = 1;
    num = 0;
    printf("Input number: ");
    scanf("%d", &num);
    printf("All dividers are");
    while (i <= num)
    {
        if (num % i == 0)
            printf(" %d", i);
        i++;
    }
    return (0);
}