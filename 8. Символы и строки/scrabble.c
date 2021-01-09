/*
** 8.23 Написать программу, которая выводит на экран слово "yes",
** если из букв введенной строки X можно составить введенную строку
** Y, при условии, что каждую букву строки X можно использовать один
** раз. Если это невозможно сделать, вывести "no".
*/

#include "stdio.h"

int main()
{
    char str0[250] = {0};
    char str1[250] = {0};
    int freq0[257] = {0};
    int freq1[257] = {0};
    int i;
    int flag;
    
    flag = 0;
    i = 0;
    printf("Enter the first string X: ");
    gets(str0);
    printf("Enter the second string Y: ");
    gets(str1);
    while (str0[i] != '\0')
    {
        freq0[str0[i]] = freq0[str0[i]] + 1;
        i++;
    }
    i = 0;
    while (str1[i] != '\0')
    {
        freq1[str1[i]] = freq1[str1[i]] + 1;
        i++;
    }
    i = 0;
    while (i <= 257)
    {
        if (freq0[i] < freq1[i])
            flag = 1;
        i++;
    }
    if (flag == 1)
        printf("no");
    if (flag == 0)
        printf("yes");
    return (0);
}