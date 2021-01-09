#include <stdio.h>

/*
** 4.6 Напишите программу, которая выводит на экран фигуру в виде
** ромба. Вы можете использовать операторы printf, которые выводят
** либо одну звездочку, либо один пробел. Высота ромба вводится
** отдельно с клавиатуры.
*/

int main()
{
     
        int h;
    int i;
    int j;
    int k;
    int n;
    int hhalf;
    int f;

    h = 0;
    n = 0;
    i = 0;
    k = 1;
    printf("Enter height: ");
    scanf("%d", &h);        
        
    j = 1;
    i = 0;
    k = 1;
    hhalf = h/2;
    while (i < hhalf)
    {
        f = k;        
        while (j < hhalf)
        {
            printf(" ");
            j++;
        }
        while (k > 0)
        {
            printf("*");
            k--;
        }
        printf("\n");  
        ++i;
        j = i + 1;
        n = 0;
        k = 2 * i + 1;
    }
     
    n = 0;
    j = hhalf;
    i = 0;
    while (i < hhalf)
    {
        while (j < hhalf)
        {
            printf(" ");
            j++;
        }
        while (f > n)
        {
            printf("*");
            n++;
        }
        printf("\n");  
        ++i;
        j = hhalf - i;
        n = 0;
        f = f - 2;
    }
    printf("\n");
      
    return (0);
}




