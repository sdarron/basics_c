/*
** 8.6 Написать функцию, проверяющую, что строка является
** палиндромом.
*/

#include <stdio.h>

int strpolin(char *str)
{
    int i;
    int j;
    int len;

    i = 0;
    j = 0;
    while (str[j] != '\0')
        ++j;
    len = j - 1;
    j--;
    while (i != len/2)
    {
        if(str[i] != str[j])
            return (0);
        i++;
        j--;
    }
    return(1);
}

int main()
{
    char ch;
    char str[250];
    
    printf("Enter the string: ");
    gets(str);
    if (strpolin(str) == 1)
        printf("String is palindrome.");
    else
        printf("String is not palindrome.");
    return (0);
}