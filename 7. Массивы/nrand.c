#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** 7.6 Напишите программу, которая спрашивает у пользователя число
** N. Если N < 1 или N > 100, то скажите пользователю, что он ввел
** неверное число, и спросите заново. Так делайте до тех пор, пока
** пользователь не введет число из заданного диапазона.
** Затем ваша программа должна создать файл input.txt, в который
** на первую строку она запишет число N, а на вторую строку – N целых
** случайных чисел, разделенных пробелами. Этот файл можно будет
** использовать как входной файл для дальнейших упражнений.
*/

int main()
{
    FILE *infale;
    int i;
    int n;

    n = 0;
    i = 0;
    srand(time(NULL));
    while (n < 1 || n > 100)
    {
        printf("Enter а number greater than 1 and less then 100: ");
        scanf("%d", &n);
         if (n < 1 || n > 100)
            printf("The number is incorrect.\n");
    }
    infale = fopen("input1.txt", "w");
    fprintf(infale, "%d\n", n);
    int arr[n];
    while (i < n)
    {
        arr[i] = 1 + rand() % 100;
        i++;
    }
    i = 0;
    while (i < n)
    {
        fprintf(infale, "%d ", arr[i]);
        i++;
    }
    return (0);
}
