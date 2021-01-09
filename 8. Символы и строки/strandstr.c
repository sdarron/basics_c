/*
** 8.3 Написать свою функцию поиска первого вхождения подстроки
** в строку. Функция должна возвращать номер найденной позиции
** или -1, если найти вхождение не удалось.
*/

#include "stdio.h"

int strandstr(char *str0, char *str1)
{
    int i;
    int j;
    int k;

    k = 0;
    i = 0;
    j = 0;
    while (str0[i] != '\0')
    {
        if (str0[i] == str1[0])
        {
            k = i;
            break;
        }
        i++;
    }
    i = 0;
    while (str0[i] != '\0')
    {
        if (str0[i] == str1[j])
            j++;
        if (str1[j] == '\0' && (i - j == k))
            return (i - j);
        i++;
    }
    return (-1);
}

int main()
{
    printf("Enter the fist string: ");
    char str0[250];
    gets(str0);
    printf("Enter the second string: ");
    char str1[250];
    gets(str1);
    printf("%d", strandstr(str0, str1));
    return (0);
}