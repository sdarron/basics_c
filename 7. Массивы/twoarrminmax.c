#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
** 7.5 Создать и заполнить случайным образом матрицу 10x10. После
** этого найти и вывести минимальные значения в каждой строке
** и минимальные значений в каждом столбце.
*/

int main()
{
    const int n = 10;
    int i;
    int j;
    int arr[n][n];
    int min;

    min = 0;
    srand(time(NULL));
    i = 0;
    j = 0;
    while (j < n)
    {
        while (i < n)
        {
            arr[j][i] = 1 + rand() % 100;
            i++;
        }
        i = 0;
        j++;
    }
    j = 0;
    while (j < n)
    {
        while (i < n)
        {
            printf("%d ", arr[j][i]);
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    }
    j = 0;
    printf("\nМинимумы в строках: ");
    while (j < n)
    {
        min = arr[j][i];
        while (i < n)
        {
            if (min > arr[j][i])
                min = arr[j][i];
            i++;
        }
        printf("%d ", min);
        i = 0;
        j++;
    }
    printf("\nМинимумы в столбцах: ");
    j = 0;
    while (i < n)
    {
        min = arr[j][i];
        while (j < n)
        {
            if (min > arr[j][i])
                min = arr[j][i];
            j++;
        }
        printf("%d ", min);
        j = 0;
        i++;
    }




    return (0);
}