/*
** 7.8 Используя программу, написанную в 7.6, сгенерируйте два
** файла, содержащих по N случайных чисел. Считайте содержимое
** обоих файлов в два массива. Затем в третий массив того же размера,
** что и первые два, запишите суммы чисел, стоящих на соответствую-
** щих позициях в двух исходных массивах.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *infile;
    FILE *infile1;
    FILE *outfile;
    const int n = 21;
    int arr[n];
    int arr1[n];
    int arr2[n];
    int i;
    int num;

    i = 0;
    infile = fopen("input.txt", "r");
    infile1 = fopen("input1.txt", "r");
    outfile = fopen("output.txt", "w");
    while (fscanf(infile, "%d", &num) != -1)
    {
        arr[i] = num;
        fprintf(outfile, "%d ", arr[i]);
        printf("%d ", arr[i]);
        i++;
    }
    fprintf(outfile, "\n");
    printf("\n");
    i = 0;
    while (fscanf(infile1, "%d", &num) != -1)
    {
        arr1[i] = num;
        fprintf(outfile, "%d ", arr1[i]);
        printf("%d ", arr1[i]);
        i++;
    }
    fprintf(outfile, "\n");
    printf("\n");
    i = 0;
    while (i < n)
    {
        arr2[i] = arr[i] + arr1[i];
        fprintf(outfile, "%d ", arr2[i]);
        printf("%d ", arr2[i]);
        i++;
    }
    fprintf(outfile, "\n");
    printf("\n");
    fclose(infile);
    fclose(infile1);
    fclose(outfile);
    return (0);
}