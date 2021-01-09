/*
** 7.13 В матрице A поменять местами наибольший и наименьший
** элементы (можно считать, что такие элементы в матрице
** уникальны). Полученную матрицу вывести на экран.
*/

#include "stdio.h"

int main()
{
    int arr[5][5] = {{10,18,3,4,4},
                     {1,2,8,4,5},
                     {5,2,3,4,5},
                     {16,2,3,1,5},
                     {13,2,0,4,5}};

    int i;
    int j;
    int min;
    int max;
    int c;

    i = 0;
    j = 0;

    while (j < 5)
    {
        while (i < 5)
        {
            if (arr[j][i] > max)
                max = arr[j][i];
            if (arr[j][i] < min)
                min = arr[j][i];
            c = min;
            i++;
        }
        i = 0;
        j++;
    }
    i = 0;
    j = 0;
    while (j < 5)
    {
        while (i < 5)
        {
            if (arr[j][i] == min)
                arr[j][i] = max;
            else if (arr[j][i] == max)
                arr[j][i] = min;             
            i++;
        }
        i = 0;
        j++;
    }
    j = 0;
    i = 0;
    while (j < 5)
    {
        while (i < 5)
        {
            printf("%3d", arr[j][i]);            
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    }
}
    