#include <stdio.h>

/*
** 3.5 Программа спрашивает у пользователя два числа A и B
** и выводит сумму всех чисел между ними (включительно).
*/


int main ()
{
    int a;
    int b;
    int c;
    
    c = 0;
    a = 0;
    b = 0;
    printf("Input A and B:");
    scanf("%d%d", &a, &b);
    c = a + 1;
    while (c <= b)
    { 
        a = a + c;
        c++;
    }
    printf("Sum a to b is %d", a);
    return 0;
}