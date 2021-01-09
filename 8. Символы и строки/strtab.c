
/*
** 8.11 Написать две функции. Первая преобразует все символы строки
** к заглавным буквам, вторая преобразует все символы строки
** к строчным буквам.
*/

#include "stdio.h"

char *uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        i++;
    }
    return (str);
}


char *lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        i++;
    }
    return (str);
}

int main()
{
    char str[250];
    
    printf("Enter the string: ");
    gets(str);
    printf("%s\n", uppercase(str));
    printf("%s\n", lowercase(str));
    return(0);
}