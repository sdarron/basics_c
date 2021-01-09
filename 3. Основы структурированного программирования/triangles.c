#include <stdio.h>

/*
** Напишите программу, которая по отдельности 
** выводит один за другим следующие рисунки:
** *     ***** *****      *
** **    ****   ****     **
** ***   ***     ***    ***
** ****  **       **   ****
** ***** *         *  *****
*/

int main()
{
    int h;
    int i;
    int j;
    int k;
    int n;

    h = 0;
    n = 0;
    i = 0;
    k = 1;
    printf("Enter height: ");
    scanf("%d", &h);
    j = h - 1;
    while (i < h)
    {
        while (j < h)
        {
            printf("*");
            j++;
        }
        while (k < h)
        {
            printf(" ");
            k++;
        }
        printf("\n");  
        ++i;
        j = j - i - 1;
        n = 0;
        k = i + 1;
    }
    printf("\n");

    n = 0;
    j = 1;
    i = 0;
    k = h;
    while (i < h)
    {
        while (j <= h)
        {
            printf("*");
            j++;
        }
        while (k < h)
        {
            printf(" ");
            k++;
        }
        printf("\n");  
        ++i;
        j = i + 1;
        n = 0;
        k = k - i;
    }
    printf("\n");

    n = 0;
    j = h;
    i = 0;
    k = 1;
    while (i < h)
    {
        while (j < h)
        {
            printf(" ");
            j++;
        }
        while (k <= h)
        {
            printf("*");
            k++;
        }
        printf("\n");  
        ++i;
        j = h - i;
        n = 0;
        k = i + 1;
    }
    printf("\n");

    n = 0;
    j = 1;
    i = 0;
    k = h;
    while (i < h)
    {
        while (j < h)
        {
            printf(" ");
            j++;
        }
        while (k <= h)
        {
            printf("*");
            k++;
        }
        printf("\n");  
        ++i;
        j = i + 1;
        n = 0;
        k = k - i - 1;
    }
    printf("\n");

    return (0);
}