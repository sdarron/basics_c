/*
** 8.2 Написать свою функцию определения первого вхождения
** указанного символа в заданную строку. Функция должна возвращать
** адрес найденного символа или NULL, если найти его не удалось.
*/

#include <stdio.h>

char *strchar(char *str, char ch)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            return(&str[i]);
        i++;
    }
    return (NULL);
}

int main()
{
    char c;
    char *ch;

    printf("Enter the string: ");
    char str[250];
    gets(str);
    printf("Enter character: ");
    scanf("%c", &c);
    ch = strchar(str,c);
    if (ch != NULL)
        printf("Address %c is %ld", c, ch - str);
    else
        printf("No character.");
    return (0);
}