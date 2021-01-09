
/*
** 7.9 Напишите программу, которая считывает все числа из файла
** input.txt в массив заведомо бóльшего размера, спрашивает у поль-
** зователя произвольное число и вставляет его в массив.
** Для этого она спрашивает сначала число a – то, которое надо
** вставить, а затем число i – номер той ячейки, в которую его надо
** вставить. При этом программа должна спрашивать у пользователя
** число i до тех пор, пока оно не будет принадлежать отрезку [0, N-
** 1]. Затем она должна вставить число a в ячейку i, сдвинув при этом
** подмассив (ai, ..., aN-1) на одну ячейку вправо.
** Например, из файла мы считали массив (1, 4, 2, 10, 3). Затем
** пользователь ввел a = 7, i = 3. Мы должны получить массив (1, 4,
** 2, 7, 10, 3). Выведите результат на экран и в файл.
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
    int seq1;
    int k;

    k = 0;
    seq1 = 0;
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
    printf("Enter the number: ");
    scanf("%d", &num);
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
    while (seq - 1 <= i)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[seq - 1] = num;
    i = 0;
    while (i <= k)
    {
        printf("%d ", arr[i]);
        fprintf(outfile, "%d ", arr[i]);
        i++;
    }
    fclose(infile);
    fclose(outfile);
    return (0);
}