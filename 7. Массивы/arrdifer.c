/*
** 7.17 Дана целочисленная матрица размера M × N. Найти количество
** ее строк, все элементы которых различны.
*/

#include <stdio.h>

int main()
{
    int arr[7][7] = {{1,2,3,4,5,6,7},
                     {6,7,8,4,10,8,12},
                     {11,12,13,14,11,12,17},
                     {16,17,16,19,20,21,22},
                     {21,22,23,21,25,26,27},
                     {28,29,30,31,32,33,34},
                     {35,36,37,40,39,40,41}};
    int i;
    int j;
    int k;
    int n;
    int flag;
    int l;

    n = 7;
    k = 1;
    l = n;
    flag = 0;
    i = 0;
    j = 0;
    while (j < l)
    {
        while (i < l)
        {
            while (k < l)
            {
                if (arr[j][i] == arr[j][k])
                {
                    //printf("-%d-", arr[j][k]);
                    --n;
                    flag = 1;
                    break;
                }
                k++;
            }
            if (flag == 1)
                break;
            i++;
            k = i + 1;
        }
        flag = 0;
        i = 0;
        k = 1;
        j++;  
    }
    printf("Lines with different elements are %d.", n);
    return (0);
}