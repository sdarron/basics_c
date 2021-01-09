#include <stdio.h>

/*
** 6.4 Во входном файле записаны два числа на одной строке,
** разделенные пробелом. В выходной файл вывести их сумму,
** произведение и разность – каждое значение на своей строке.
*/

int main()
{
    int a;
    int b;
    FILE *infile;
    FILE *outfile;
    
    a = 0;
    b = 0;
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    fscanf(infile, "%d%d", &a, &b);
    fprintf(outfile, "Sum = %d\nMul = %d\nSub = %d\n", a + b, a * b, a - b);
    fclose(infile);
    fclose(outfile);
    return (0);
}