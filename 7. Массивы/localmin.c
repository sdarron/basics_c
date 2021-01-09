/*
** 7.18 Дана матрица размера M × N. Элемент матрицы называется ее
** локальным минимумом, если он меньше всех окружающих его
** элементов. Заменить все локальные минимумы данной матрицы на
** нули.
*/

#include <stdio.h>

int main()
{
    int arr0[8][7] = {{1, 2, 3, 1, 5, 6, 1},
                      {6, 7, 8, 9, 10, 3,12},
                      {11,12,13,14,15,16,17},
                      {16, 5,18,19,20,21, 1},
                      {21,22,23,24, 9,26,27},
                      { 1,29, 8,31,32,33, 1},
                      {35,36,37,38,39,40, 2},
                      { 1,43, 1,45,46,47, 1}};

    int arr1[8][7];
    int i;
    int j;
    int m;
    int n;

    i = 0;
    j = 0;
    m = 7;
    n = 8;
    while (j < n)
    {
        while (i < m)
        {
            arr1[j][i] = arr0[j][i];
            i++;
        }
        i = 0;
        j++;
    }
    i = 0;
    j = 0;
    while (j < n)
    {
        while (i < m)
        {
            if(arr0[j][i] < arr0[j][i + 1] && arr0[j][i] < arr0[j][i - 1]
                && arr0[j][i] < arr0[j - 1][i] && arr0[j][i] < arr0[j + 1][i]
                && arr0[j][i] < arr0[j + 1][i - 1] && arr0[j][i] < arr0[j - 1][i - 1]
                && arr0[j][i] < arr0[j + 1][i + 1] && arr0[j][i] < arr0[j - 1][i + 1])
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i + 1] && arr0[j][i] < arr0[j + 1][i] 
                && arr0[j][i] < arr0[j + 1][i + 1] && j == 0 && i == 0)
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i - 1] && arr0[j][i] < arr0[j + 1][i] 
                && arr0[j][i] < arr0[j + 1][i - 1] && j == 0 && i == 6)
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i + 1] && arr0[j][i] < arr0[j - 1][i] 
                && arr0[j][i] < arr0[j - 1][i + 1] && j == n - 1 && i == 0)
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i - 1] && arr0[j][i] < arr0[j - 1][i] 
                && arr0[j][i] < arr0[j - 1][i - 1] && j == n - 1 && i == m - 1)
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i + 1] && arr0[j][i] < arr0[j][i - 1]
                && arr0[j][i] < arr0[j + 1][i - 1] && arr0[j][i] < arr0[j + 1][i + 1]
                && arr0[j][i] < arr0[j + 1][i] && j == 0)
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i + 1] && arr0[j][i] < arr0[j][i - 1]
                && arr0[j][i] < arr0[j - 1][i - 1] && arr0[j][i] < arr0[j - 1][i + 1]
                && arr0[j][i] < arr0[j - 1][i] && j == n - 1)
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i + 1] && arr0[j][i] < arr0[j - 1][i]
                && arr0[j][i] < arr0[j - 1][i + 1] && arr0[j][i] < arr0[j + 1][i + 1]
                && arr0[j][i] < arr0[j + 1][i] && i == 0)
                arr1[j][i] = 0;
            if(arr0[j][i] < arr0[j][i - 1] && arr0[j][i] < arr0[j - 1][i]
                && arr0[j][i] < arr0[j - 1][i - 1] && arr0[j][i] < arr0[j + 1][i - 1]
                && arr0[j][i] < arr0[j + 1][i] && i == m - 1)
                arr1[j][i] = 0;
            i++;
        }
        i = 0;
        j++;
    }
    i = 0;
    j = 0;
    while (j < n)
    {
        while (i < m)
        {
            printf("%3d ", arr1[j][i]);
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    }
    return (0);
}