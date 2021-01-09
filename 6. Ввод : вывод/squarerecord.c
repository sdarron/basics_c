#include <stdio.h>

/*
** Cоздать в блокноте файл input.txt и записать в него целое число.
** Написать программу, которая считывает данное число N и печатает в выходном
** файле output.txt квадрат из звездочек, высотой N.
*/

int main ()
{
    int n;
    int i;
    int j;
    FILE *infile;
    FILE *outfile;

    j = 0;
    n = 0;
    i = 0;
    infile = fopen("input.txt", "r");
    fscanf(infile, "%d", &n);
    fclose(infile);
    outfile = fopen("output.txt","w");
    while (i < n)
    {
        while (j < n)
        {
            fprintf(outfile,"*");
            j++;
        }
        fprintf(outfile,"\n");
        j = 0;
        i++;
    }
    fclose(outfile);
    return (0);
}