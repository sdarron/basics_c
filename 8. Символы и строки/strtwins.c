/*
** 8.17 Написать функцию, проверяющую, что переданную строку
** можно разбить на две одинаковые подстроки. Например, строку
** "abcabc" можно разбить на две одинаковые половины "abc".
*/

#include <stdio.h>

int strtwins(char *str)
{
    int i;
    int j;
    int k;
    int len;

    j = 0;
    i = 0;
    while (str[j] != '\0')
        j++;
    k = j / 2;
    len = k;
    while (i < len)
    {
        if (str[i] != str[k])
            return(0);
        i++;
        k++;
    }
    i = 0;
    j = 0;
    return(1);
}

int main()
{
    char str[250];
    char ch;
    char chan;
    
    printf("Enter the string: ");
    gets(str);
    if (strtwins(str) == 1)
        printf("The string can be divided into two equal parts.");
    if (strtwins(str) == 0)
        printf("The string can not divided into two equal parts.");
    return (0);
}
