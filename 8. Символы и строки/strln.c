/*
** 8.1 Написать свою собственную функцию strln() для определения
** длины строки.
*/

#include <stdio.h>
#include <string.h>

int strln(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main()
{
    printf("Enter the string: ");
    char str[250];
    gets(str);
    printf("Number of character are %d.", strln(str));
    return (0);
}
