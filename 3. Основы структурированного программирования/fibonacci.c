#include <stdio.h>

/*
** Составьте программу, выводящую все числа Фибоначчи,
** меньшие заданного числа N.
*/

int main()
{
    int num;
    int a;
    int b;
    int c;

    a = 0;
    b = 1;
    c = 1;
    num = 0;
    printf("Input number greater 1");
    scanf("%d", &num); 
    printf("0 1 ");
    while (a < num)
    {
        printf("%d ", b);
        a = b + c;
        c = b;
        b = a;
    }
    return (0);    
}