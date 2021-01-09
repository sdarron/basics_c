/*
** 8.14 Написать функцию, переворачивающую переданную строку
** задом наперед. Например, из строки "gateman" должно получиться
** "nametag".
*/

#include "stdio.h"

char *strrev(char *str)
{
    int i;
    int len;
    int j;
    char ch;

    i = 0;
    len = 0;
    while (str[len] != '\0')
        len++;
    j = len - 1;
    while (i < len/2)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        j--;
        i++;
    }
    return(str);
}

int main()
{
    char str[250];
    
    printf("Enter the string: ");
    gets(str);
    printf("Revers of strings is %s", strrev(str));
    return(0);
}