/*
** 8.15 Написать функцию, которая принимает на вход строчку
** и символ. Функция возвращает максимальное количество подряд
** идущих переданных символов в строке. Например, для строки
** "asdaajhys as asaaafg r" и символа 'a', нужно выдать 3.
*/

#include <stdio.h>

int charrow(char *str, char ch)
{
    int i;
    int j;
    int max;

    max = 0;
    j = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            while (str[i] == ch)
            {
                j++;
                if (max < j)
                max = j;
                i++;
            }
            j = 0;
        }
        i++;
    }
    return (max);
}

int main()
{
    char str[250];
    char ch;
    
    printf("Enter the string: ");
    gets(str);
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("Maximum number of characters in a row is %d.", charrow(str, ch));
    return (0);
}