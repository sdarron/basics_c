/*
** 8.8 Написать функцию, вычисляющую количество цифр в строке.
** Например, в строке "sdf 2q43 jdsfhas3434" содержится 7 цифр.
*/

#include <stdio.h>

int numdig(char *str)
{
    int i;
    int n;

    n = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
            n++;
        i++;
    }
    return(n);
}

int main()
{
    char str[250];
    
    printf("Enter the string: ");
    gets(str);
    printf("Number of digits in string - %d.", numdig(str));
    return(0);
}