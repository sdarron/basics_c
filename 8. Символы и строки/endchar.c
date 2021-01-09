/*
** 8.10 Написать функцию, которая принимает на вход строчку
** исимвол. Функцию должна выдать позицию самого последнего
** вхождения указанного символа в строке.
*/

#include "stdio.h"

int endchar(char *str, char ch)
{
    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    while (str[i] != '\0')
        i++;
    j = i;
    while (j >= 0)
    {
        if (str[j] == ch)
            return(i - k + 1);
        j--;
        k++;
    }
    return (0);
}

int main()
{
    char str[250];
    char ch;
    
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("Last position for %c is %d.", ch, endchar(str, ch));
    return (0);
}