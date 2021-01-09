/*
**  8.12 Написать собственную функцию сравнения двух строк. Функция
** возвращает 1, если строки одинаковые, 0 – иначе.
*/

#include "stdio.h"

int strcomp(char *str0, char *str1)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (str0[i] != '\0' || str1[j] != '\0')
    {   
        if (str0[i] != str1[j])
            return (0);
        i++;
        j++;
    }
    return (1);
}

int main()
{
    char str0[250];
    char str1[250];
    
    printf("Enter the first string: ");
    gets(str0);
    printf("Enter the second string: ");
    gets(str1);
    if(strcomp(str0, str1) == 1)
        printf("Strings are equal.");
    if(strcomp(str0, str1) == 0)    
    printf("Strings are not equal.");
    return (0);
}