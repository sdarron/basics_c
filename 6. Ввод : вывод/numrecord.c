#include <stdio.h>

/*
** 6.1 Спросить у пользователя число и записать его в файл output.txt.
** Найти этот файл на диске и проверить, что число записалось.
*/

int main()
{
    int n;
    FILE *pfile;
    
    n = 0;
    printf("Input number: ");
    scanf("%d", &n);
    pfile = fopen("output.txt", "a");
    fprintf(pfile, "%d", n);
    fclose(pfile);
    return (0);
}