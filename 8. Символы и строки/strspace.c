/*
** 8.22 Написать программу, которая выполняет выравнивание строки,
** введенной пользователем, по ширине. То есть пользователь вводит
** строку S и желаемую ширину N. Программа добавляет в S
** необходимое число пробелов между словами, так, чтобы длина
** строки стала равна N. Причем:
** – перед первым словом все пробелы удалить;
** – после последнего слова все пробелы удалить;
** – добавленные пробелы равномерно распределить между словами.
** Если длина строки S изначально превосходит N, то удалить из S все
** лишние пробелы. Если после этого длина получившейся строки по-
** прежнему больше N, то оставить строку в таком состоянии.
*/

#include "stdio.h"

char *strrev(char *str)
{
    int i;
    int len;
    int j;
    char ch;

    i = 0;
    len = 0;
    while (str[len] != '\0')
        len++;
    j = len - 1;
    while (i < len/2)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        j--;
        i++;
    }
    return(str);
}

char *delspaseand(char *str)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (str[i] != '\0')
        i++;
    len = i;
    while (str[i - 1] == ' ')
    {
        str[i - 1] = '\0';
        i--;
    }
    return (str);
}

int strln(char *str)
{
    int len;
    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int main()
{
    char str[250] = {0};
    int i;
    int j;
    int len;
    int n;
    int k;
    int add;
    int m;
    int sp;

    sp = 0;
    add = 0;
    k = 0;
    n = 0;
    len = 0;
    i = 0;
    j = 0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the number: ");
    scanf("%d", &n);
    char str1[250] = {0};
    delspaseand(str);
    strrev(str);
    delspaseand(str);
    strrev(str);
    len = strln(str);
    if (len > n)
    {
        while (k < len)
        {
            while (str[i] != '\0')
            {
                if (str[i] == ' ' && str[i + 1] == ' ')
                {   
                    j =  i;
                    while (str[j] != '\0')
                    {
                        str[j] =  str[j + 1];
                        j++;
                    }
                }
                i++; 
            }
            i = 0;
            k++;
        }
    }
    len = strln(str);
    if (len > n)
        printf("%s", str);
    i = 0; 
    j = 0; 
    if (len < n)
    {
        add = n - len;
        while (str[i] != '\0')
        {
            if (str[i] == ' ')
                j++;
            i++;
        }
        k = add / j;
        m = add % j;
        sp = k;
        i = 0;
        j = 0;
        while (str[i] != '\0')
        {
            if (str[i] == ' ')
            {
                while (k > 0)
                {
                   str1[j] = ' ';
                   j++;
                   k--;
                }
            }
            k = sp;
            str1[j] = str[i];
            i++;
            j++;
        }
        printf("%s", str1);
    }
    return (0);
}