/*
** 8.5 Написать функцию, удаляющую первый символ из строки.
*/

#include "stdio.h"

char *delfirst(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        str[i] =  str[i + 1];
        i++;
    }
    return (str);
}

int main()
{
    char str[250];

    printf("Enter the string: ");
    gets(str);
    printf("%s", delfirst(str));
    return (0);
}