#include <stdio.h>

/*
** 6.3 Во входном файле записано несколько чисел. Считать все числа
** и вывести в выходной файл и на консоль максимальное
** и минимальное из данных чисел (для определения, все ли числа
** считаны, использовать функцию feof и понимание того, что
** fscanf_s возвращает значение -1 при попытке чтения из
** закончившегося файла).
*/

int main()
{
    int n;
    int min;
    int max;
    
    
    min = 0;
    max = 0;
    n = 0;
    FILE *infile;
    FILE *outfile;
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    fscanf(infile, "%d", &min);
    max = min;
    while (!feof(infile))
    {
        if (fscanf(infile, "%d", &n) != -1)
        {
            if (n > max)
                max = n;
            if (n < min)
                min = n;
        }
    }
    fprintf(outfile, "min %d max %d\n", min, max);
    printf("min %d max %d\n", min, max);
    fclose(infile);
    fclose(outfile);
    return (0);
}