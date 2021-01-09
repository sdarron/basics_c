#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
** 7.4 Создать и заполнить случайным образом две матрицы 10x10.
** После этого поэлементно сложить их и вывести на экран.
*/


int main ()
{
    const int n = 10;
    int i;
    int j;
    int arr[n][n];
    int arr1[n][n];

    i = 0;
    j = 0;
    srand(time(NULL));
    while (j < n)
    {
        while (i < n)
        {
            arr[j][i] = 1 + rand() % 100;
            ++i;
        }
        i = 0;
        ++j;
    }
    j = 0;
    while (j < n)
    {
        while (i < n)
        {
            printf("%d ", arr[j][i]);
            ++i;
        }
        printf("\n");
        i = 0;
        ++j;
    }
    printf("\n");
    j = 0;
    while (j < n)
    {
        while (i < n)
        {
            arr1[j][i] = 1 + rand() % 100;
            ++i;
        }
        i = 0;
        ++j;
    }
    j = 0;
    while (j < n)
    {
        while (i < n)
        {
            printf("%d ", arr1[j][i]);
            ++i;
        }
        printf("\n");
        i = 0;
        ++j;
    }
    printf("\n");
    j = 0;
    while (j < n)
    {
        while (i < n)
        {
            arr[j][i] = arr[j][i] + arr1[j][i];
            ++i;
        }
        i = 0;
        ++j;
    }
    j = 0;
    while (j < n)
    {
        while (i < n)
        {
            printf("%d ", arr[j][i]);
            ++i;
        }
        printf("\n");
        i = 0;
        ++j;
    }
    return (0);
}