/*
** 8.19 Написать программу, которая выводит на экран все буквы,
** встречающиеся в строке, и их количество. Строку пользователь
** вводит с клавиатуры. 
*/

#include <stdio.h>

int main()
{
    int freq[257] = {0};
    char str[250];

    printf("Enter the string: ");
    gets(str);
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        freq[str[i]] = freq[str[i]] + 1;
        i++;
    }
    i = 0;
    while(i < 256)
    {
        if(freq[i] != 0)
        printf("%c: %d\n", i, freq[i]);
        i++;
    }
    return 0;
}