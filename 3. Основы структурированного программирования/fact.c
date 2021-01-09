#include <stdio.h>

/*
** 3.6 Вычесление факториала.
*/

int main()
{
    int a;
    int b;
    int rez;

    rez = 0;
    a = 0;
    b = 0;    
    printf("Input number from 1 to 10: ");
    scanf("%d", &a);
    while (a)
    {
        if (a < 1 || a > 10)
        {    
        printf("Input number from 1 to 10: ");
        scanf("%d", &a);
        }
        else
        {
            break;
        }
    }
    b = a - 1;    
    while (b >= 1)
    {
        a = a * b;
        b--;
    }
    printf("Factorial N!= %d", a);
    return (0);
}