/*
** 8.20 Написать программу, которая выводит на экран символ,
** встречающийся в введенной пользователем строке чаще всего.
*/

#include "stdio.h"

int main()
{
    int freq[257] = {0};
    char str[250];
    int max;
    int i;
    i = 0;

    printf("Enter the string: ");
    gets(str);
    while (str[i] != '\0')
    {
        freq[str[i]] = freq[str[i]] + 1;
        i++;
    }
    i = 0;

    max = freq[0];
    while (i < 257)
    {
        if (freq[i] > max)
            max = freq[i];
        i++;
    }
    i = 0;
    while (i < 257)
    {
       if (freq[i] == max)
           printf("The most frequent character is %c: %d\n", i, freq[i]);
        i++;
    }
    return 0;
}
