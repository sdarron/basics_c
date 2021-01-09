/*
** 8.13 Написать функцию сравнения двух строк без учета регистра.
** Функция возвращает 1, если строки одинаковые, 0 – иначе.
*/

#include "stdio.h"

int strcompcase(char *str0, char *str1)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (str0[i] != '\0' || str1[j] != '\0')
    {   
        if (str0[i] >= 'a' && str0[i] <= 'z')
        {
            if (str0[i] != str1[j] && str0[i] != str1[j] + ('a' - 'A'))
                return (0);
        }   
        if (str0[i] >= 'A' && str0[i] <= 'Z')
        {
            if (str0[i] != str1[j] && str0[i] != str1[j] - ('a' - 'A'))
                return (0);
        }
        i++;
        j++;
    }
    return (1);
}

int main()
{
    char str0[250];
    char str1[250];
    
    printf("Enter the first string: ");
    gets(str0);
    printf("Enter the second string: ");
    gets(str1);
    if(strcompcase(str0, str1) == 1)
        printf("Strings are equal.");
    if(strcompcase(str0, str1) == 0)    
    printf("Strings are not equal.");
    return (0);
}
