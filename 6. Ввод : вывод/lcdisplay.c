#include <stdio.h>
#include <math.h>

/*
** 6.10 Создать программу, выводящую числа так же, как
** они выглядят на калькуляторе. Во входном файле дано целое
** положительное число, ваша программа должна напечатать его
** в выходном файле (располагая цифры на одной «строке»).
*/

int main()
{
    FILE *infile;
    FILE *outfile;
    int num;
    int n;
    int i;
    int dig;
    int len;
    int k;
    int j;

    j = 0;
    dig = 0;
    len = 1;
    i = 5;
    k = 0;
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    fscanf(infile, "%d", &num);
    n = num;
    while (n / 10 != 0)
    {
        n = n / 10;
        len++;
    }
    k = len;
    while (i > 0)
    {
        while (0 < len) 
        {
            dig = num / pow(10, --len); 
            dig = dig % 10;             
            if (dig == 1)
                fprintf(outfile, "  ");
            if (dig == 4)
                fprintf(outfile, "     ");
            if (dig == 2 || dig == 3 || dig == 5 || dig == 6 || dig == 7 || dig == 8 || dig == 9 || dig == 0) 
                fprintf(outfile, " --  ");
        }
        while (j <= 1)
        {                     
            fprintf(outfile, "\n");
            i--;
            len = k;
            while (0 < len) 
            {
                dig = num / pow(10, --len); 
                dig = dig % 10;             
                if (dig == 1)
                    fprintf(outfile, "| ");
                if (dig == 2 || dig == 3 || dig == 7)
                    fprintf(outfile, "   | ");
                if (dig == 5 || dig == 6)
                    fprintf(outfile, "|    ");
                if (dig == 4 || dig == 8 || dig == 9 || dig == 0 ) 
                    fprintf(outfile, "|  | ");
            }
            j++;
        }
        fprintf(outfile, "\n");
        i--;
        len = k;
        while (0 < len) 
        {
            dig = num / pow(10, --len); 
            dig = dig % 10;             
            if (dig == 1)
                fprintf(outfile, "  ");
            if (dig == 7 || dig == 0)
                fprintf(outfile, "     ");
            if (dig == 2 || dig == 3 || dig == 5 || dig == 6 || dig == 4 || dig == 8 || dig == 9)  
                fprintf(outfile, " --  ");
        }
        j = 0;
        while (j <= 1)
        {              
            fprintf(outfile, "\n");
            i--;
            len = k;
            while (0 < len) 
            {
                dig = num / pow(10, --len); 
                dig = dig % 10;             
                if (dig == 1)
                    fprintf(outfile, "| ");
                if (dig == 4 || dig == 3 || dig == 7 || dig == 5 || dig == 9)
                    fprintf(outfile, "   | ");
                if (dig == 2)
                    fprintf(outfile, "|    ");
                if (dig == 8 || dig == 6 || dig == 0 )   
                    fprintf(outfile, "|  | ");
            }
            j++;
        }
        fprintf(outfile, "\n");
        i--;
        len = k;
        while (0 < len) 
        {
            dig = num / pow(10, --len); 
            dig = dig % 10;             
            if (dig == 1)
                fprintf(outfile, "  ");
            if (dig == 4 || dig == 7)
                fprintf(outfile, "     ");
            if (dig == 2 || dig == 3 || dig == 5 || dig == 6 || dig == 0 || dig == 8 || dig == 9)  
                fprintf(outfile, " --  ");
        }
        fprintf(outfile, "\n");
    }
    fclose(infile);
    fclose(outfile);
    return (0);
}