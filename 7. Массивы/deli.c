/*
** 7.10 Модифицируйте программу из 7.9 так, чтобы она удаляла
** элемент из массива. Программа должна спрашивать только число i,
** следя, чтобы оно было из нужного диапазона. Затем она должна
** удалить i-тое число из массива, сдвинув подмассив (ai+1, ..., aN-1) на
** одну ячейку влево. Например, из файла мы считали массив (1, 4,
** 2, 10, 3). Затем пользователь ввел i = 1. Мы должны получить
** массив (1, 2, 10, 3). Выведите результат на экран и в файл.
*/

#include <stdio.h>

int main()
{
    FILE *infile;
    FILE *outfile;
    int arr[1000];
    int i;
    int num;
    int n;
    int seq;
    int k;

    k = 0;
    seq = 0;
    n = 0;
    num = 0;
    i = 0;
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    while (fscanf(infile, "%d", &n) != -1)
    {
        arr[i] = n;
        i++;
    }
    printf("Enter the sequence number less %d and more than 0: ", i);
    scanf("%d", &seq);
    if (seq >= i || seq < 0)
    {
        while (seq < 0 || seq >= i)
        {
            printf("Enter the sequence number less %d and more than 0: ", i);
            scanf("%d", &seq);
        }
    }
    k = i;
    while (seq - 1 < i) 
    {
        arr[seq - 1] = arr[seq];
        ++seq;
    }
    i = 0;
    while (i < k - 1)
    {
        printf("%d ", arr[i]);
        fprintf(outfile, "%d ", arr[i]);
        i++;
    }
    fclose(infile);
    fclose(outfile);
    return (0);
}