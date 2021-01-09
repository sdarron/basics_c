#include <stdio.h>

/*
** 4.2 Для двух положительных чисел, введенных пользователем, 
** необходимо напечатать в порядке возрастания все их общие делители.
*/

int main()
{
    int num1;
    int num2;
    int i;

    num1 = 0;
    num2 = 0;
    i = 1;
    printf("Input two numbers ");
    scanf("%d%d", &num1, &num2);
    printf("Common dividers are ");
    while (i <= num1 || i <= num2)
    {
        if (num1 % i == 0 && num2 % i == 0)
            printf("%d ", i);
        i++;
    }
    return (0);
}