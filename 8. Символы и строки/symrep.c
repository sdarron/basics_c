/*
** 8.4 Написать функцию, которая вычисляет количество вхождений
** переданного символа в строке. Например, для строки "a simple
** string" и символа 's' функция должна вернуть 2. Программа
** спрашивает у пользователя строчку и символ и печатает количество
** вхождений этого символа в строку.
*/

#include <stdio.h>

int symrep(char *str, char ch)
{
    int i;
    int num;

    num = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            num++;
        i++;
    }
    return (num);
}

int main()
{
    char ch;
    char str[250];
    
    printf("Enter the string: ");
    gets(str);
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("%c found %d times in string.", ch, symrep(str, ch));
    return (0);
}
