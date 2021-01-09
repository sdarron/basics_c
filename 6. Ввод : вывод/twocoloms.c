#include <stdio.h>

/*
** 6.8 Даны два файла с одинаковым количеством целых чисел.
** Написать программу, которая создает текстовый файл, содержащий
** эти числа, расположенные в два столбца шириной по 10 символов
** (в первом столбце содержатся числа из первого исходного файла, во
** втором – из второго файла). Столбцы разделить друг от друга при
** помощи разделителя «|». Числа выравниваются по правому краю
** столбца и отступают от него на один пробел. 
*/

int main()
{
    FILE *infile1;
    FILE *infile2;
    FILE *outfile;
    int a;
    
    int b;

    a = 0;
    b = 0;
    infile1 = fopen("input1.txt", "r");
    infile2 = fopen("input2.txt", "r");
    outfile = fopen("output1.txt", "w+");
    while (!feof(infile1) && !feof(infile2))
    {
        if ((fscanf(infile1, "%d", &a) != -1) && (fscanf(infile2, "%d", &b) != -1))
           fprintf(outfile, "|%10d |%10d |\n", a, b);
    }
    fclose(infile1);
    fclose(infile2);
    fclose(outfile);
    return (0);
}