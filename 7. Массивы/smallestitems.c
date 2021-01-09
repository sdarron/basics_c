/*
** 7.14 В каждой строке матрицы A, размером n x m программа находит
** наименьший элемент, затем среди этих чисел выбирает наибольшее.
** Нужно напечатать индексы элемента с найденным значением.
*/

#include "stdio.h"

int main()
{
    int arr[5][5] = {{10,18,3,4,4},
                     {1,2,8,4,5},
                     {5,2,3,4,5},
                     {16,2,3,1,5},
                     {13,2,0,4,5}};
    int arr1[5];
    int i;
    int j;
    int min;
    int max;

    i = 0;
    j = 0;

    while (j < 5)
    {
        min = arr[j][0];
        while (i < 5)
        {
            if (min > arr[j][i])
                min = arr[j][i];
            i++;
        }
        arr1[j] = min;
        min = 0;
        i = 0;
        j++;
    }
    j = 0;
    max = arr1[0];
    while (j < 5)
    {
        if (max < arr1[j])
            max = arr1[j];
        j++;
    }
    j = 0;
    while (j < 5)
    {
        while (i < 5)
        {
            if (max == arr[j][i])
                printf("Index max from min is: [%d] [%d]\n",j,i);
            i++;
        }
        i = 0;
        j++;
    }
    return (0);
}