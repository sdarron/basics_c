/*
** 8.18 Напишите функцию, которая записывает строковое
** представление числа в массив. Число и массив передаются ей
** в качестве параметров.
*/

#include "stdio.h"

int *numinarr(char *str, int *arr)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        arr[i] = str[i] - '0';
        i++;
    }
   return (arr);
}

int main()
{
    char str[250];
    int arr[250];
    int i;
    int j;
    
    j = 0;
    i = 0;
    printf("Enter the number: ");
    gets(str);
    while (str[i] != '\0')
        i++;
    numinarr(str, arr);
    while (j < i)
    {
        printf("%d", arr[j]);
        j++;
    }
    return (0);
}

