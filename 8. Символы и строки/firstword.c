/*
** 8.9 Написать функцию, вычисляющую длину первого слова в строке.
** Разделителем слов является пробел (строка может состоять из одного
** слова – в этом случае разделителей не будет, а также может быть
** вообще пустой).
*/

#include "stdio.h"

int firstword(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] == ' ' )
    {
        i++;
        j++;
    }
    while (str[j] != '\0' && str[j] != ' ')
        j++;
    return(j - i);
}

int main()
{
    char str[250];
    
    printf("Enter the string: ");
    gets(str);
    printf("Еhe length of the first word is %d characters.", firstword(str));
    return (0);
}