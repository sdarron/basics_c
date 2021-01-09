/*
** 8.21 Написать программу, которая выводит на экран кратчайшее
** слово в строке. Слова отделяются пробелами.
*/

#include "stdio.h"

int main()
{
    char str[250] = {0};
    int min;
    char small[250];
    int i;
    int j;
    int beg;
    int n;

    n = 0;
    i = 0;
    min = 250;
    j = 0;
    printf("Enter the string: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            while (str[i] == ' ')
              i++;
        if (str[i] != ' ')
        {
            while(str[i] != ' ' && str[i] != '\0')
            {
              j++;
              i++;
            }
            if (j < min)
            {
                min = j;
                beg = i - j;
            }
            j = 0;
        }
        if (str[i] == ' ')
            while (str[i] == ' ')
              i++;      
    }
    while (n < min)
    {
        small[n] = str[beg];
        n++;
        beg++;
    }
    printf("%s", small);
    return (0);
}