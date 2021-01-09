/*
** 7.12 Дана квадратная матрица A размерности MxM. Найти сумму
** элементов ее главной диагонали, то есть диагонали, содержащей
** следующие элементы: A0,0, A1,1, A2,2, ..., AM-1,M-1
*/

#include "stdio.h"

int main()
{
    int arr[5][5] = {{1,2,3,4,4},
                     {1,2,3,4,5},
                     {1,2,3,4,5},
                     {1,2,3,4,5},
                     {1,2,3,4,5}};

    int i;
    int j;
    int mount;

    mount = 0;
    i = 0;
    j = 0;
    while (i < 5)
    {
        mount = arr[i][j] + mount;
        i++; j++;
    }
    printf("%d\n", mount);
    return (0);
}