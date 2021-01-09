#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** 7.2 Сгенерировать случайным образом массив из 30 целых чисел
** в диапазоне от 1 до 500. Затем найти минимальный и максимальный
** элементы. Вывести весь массив, а также min и max.
*/

int main ()
{
    const int n = 30;
    int arr[n];
    int i;
    int min;
    int max;

    
    i = 0;
    srand(time(NULL));
    while (i < n)
    {
        arr[i] = 1 + rand() % 500;
        i++;    
    }
    min = arr[0];
    max = arr[0];
    i = 0;
    while (i < n)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        ++i;
    }
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    printf("min %d, max %d\n", min, max);
    return (0);
}