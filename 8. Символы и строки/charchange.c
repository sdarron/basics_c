/*
** 8.16 Написать функцию, которая принимает на вход строчку и два
** символа. Функция заменяет все вхождения первого символа в строке
** на второй символ. Например, для строки "No lemon, no melon"
** и символов 'm' и 'd' должна получиться строка "No ledon, no
** delon".
*/

#include "stdio.h"

char *charchange(char *str, char ch, char chan)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            str[i] = chan;
        i++;
    }
    return (str);
}

int main()
{
    char str[250];
    char ch;
    char chan;
    
    printf("Enter the string: ");
    gets(str);
    printf("Enter characters which needs to be changed: ");
    scanf("%c %c", &ch, &chan);
    printf("%s ", charchange(str, ch, chan));
    return (0);
}