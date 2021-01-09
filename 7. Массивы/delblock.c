/*
** 7.11 Модифицируйте программу из 7.10 так, чтобы она удаляла из
** массива не один элемент, а целый блок элементов. Программа
** должна спрашивать два числа i и j, следя при этом, чтобы 0 <= i <=
** j <= N – 1. Затем она должна удалить из массива все числа, начиная
** с i-го и заканчивая j-тым, сдвинув подмассив (aj+1, ..., aN-1) на
** нужное количество ячеек влево.
** Например, из файла мы считали массив (1, 4, 2, 10, 3). Затем
** пользователь ввел i = 1, j = 3. Мы должны получить массив (1, 3).
** Выведите результат на экран и в файл.
*/

#include <stdio.h>

int main()
{
    FILE *infile;
    FILE *outfile;
    int arr[1000];
    int i;
    int j;
    int num;
    int n;
    int seq;
    int k;

    j = 0;
    k = 0;
    seq = 0;
    n = 0;
    num = 0;
    i = 0;
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    while (fscanf(infile, "%d", &n) != -1)
    {
        arr[k] = n;
        ++k;
    }
    printf("Enter the sequence two numbers less %d and more than 0.\n", k);
    printf("The first number must be less then the second.\n");
    scanf("%d%d", &i, &j);
    if (i >= k || i < 0 || j >= k || j < 0 || i == j)
    {
        while (i >= k || i < 0 || j >= k || j < 0 || i == j)
        {
            printf("Enter the sequence two numbers less %d and more than 0.\n", k);
            printf("The first number must be less then the second.\n");
            scanf("%d%d", &i, &j);
        }
    }
    fclose(infile);
    fclose(outfile);
    return (0);
}
