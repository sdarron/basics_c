#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** 7.1 Сгенерировать случайным образом массив из 10 целых чисел
** в диапазоне от 10 до 30. Затем вывести этот массив в прямом
** и обратном порядке.
*/

int main()
{
    const int n = 10;
    int arr[n];
    int i;

    i = 0;
    srand(time(NULL));
    while (i < n)
    {
        arr[i] = 10 + rand() % 21;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    while (i > 0)
    {
        --i;
        printf("%d ", arr[i]);
    }
    printf("\n");
    return (0);
}