#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
** 7.3 Сгенерировать случайным образом массив из 10 целых чисел
** в диапазоне от -500 до 500. Вывести сначала исходный массив,
** а затем тот же самый массив, только выводить необходимо модули
** чисел (без знака).
*/

int main()
{
    const int n = 10;
    int i;
    int arr[n];

    i = 0;
    srand(time(NULL));
    while (i < n)
    {
        arr[i] = rand() % 1001 - 500;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (i < n)
    {
        if (arr[i] <= 0)
            printf("%d ", arr[i] * (-1));
        if (arr[i] > 0)
            printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    return (0);
}