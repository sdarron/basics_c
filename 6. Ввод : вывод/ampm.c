#include <stdio.h>

/*
** 6.7 В России дату и время принято представлять в виде: 04:12:57
** 14.03.2009 (14 мая 2009 года 4 часа 12 минут 57 секунд), в Америке
** та же дата и время представляются в виде: 04:12:57 AM 03/14/2009.
** AM используется для указания времени до полудня, PM – после,
** таким образом, количество часов никогда не превосходит 12. Во
** входном файле вам дана дата в российском формате, ваша задача
** записать в выходной файл ее американское представление.
*/

int main()
{
    FILE *infile;
    FILE *outfile;
    int hour;
    int hour1;
    int min;
    int sec;
    int day;
    int mouth;
    int year;

    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    fscanf(infile, "%d:%d:%d %d.%d.%d", &hour, &min, &sec, &day, &mouth, &year);
    if (hour < 12)
        fprintf(outfile, "%02d:", hour);
    if (hour >= 12)
    {
        hour1 = hour - 12;
        fprintf(outfile, "%02d:", hour1); 
    }
    fprintf(outfile, "%02d:%02d", min, sec);
    if (hour < 12)
        fprintf(outfile, " AM ");
    if (hour >= 12)
        fprintf(outfile, " PM ");
    fprintf(outfile, "%02d/%02d/%04d", mouth, day, year);  
    fclose(infile);
    fclose(outfile);
    return (0);
}