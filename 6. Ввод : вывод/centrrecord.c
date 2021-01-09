#include <stdio.h>

/*
** 6.9 Дан файл, в котором написано несколько целых положительных
** чисел, каждое на своей строке. Известно, что количество цифр 
** вкаждом числе нечетно. Написать программу, которая выведет
** данные числа в выходной файл выровненные по центру.
*/

int main()
{
    FILE *infile;
    FILE *outfile;
    int num;
    int i;
    int len;
    int maxlen;
    int j;
    int n;

    n = 0;
    j = 0;
    len = 0;
    maxlen = 1;
    i = 0;
    num = 0;
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    while (!feof(infile))
    {
        if (fscanf(infile, "%d", &n) != - 1)
            while (n > 1)
            {
                n = n / 10;
                ++i;
            }
        if (maxlen < i)
            maxlen = i;
        i = 0;
    }
    fclose(infile);
    infile = fopen("input.txt", "r");
    while (!feof(infile))
    {
        if (fscanf(infile, "%d", &n) != - 1)
        {    
            num = n;
            while (num > 1)
            {
                num = num / 10;
                ++len;
            }
            while (j <= (maxlen - len) /2 )
            {
                fprintf(outfile, " ");
                j++;
            }
            j = 0;
            len = 0;
            fprintf(outfile, "%d\n", n);
        }
    }
    fclose(infile);
    fclose(outfile);
    return (0);
}