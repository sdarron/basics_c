/*
** 8.7 Написать функцию, вычисляющую количество маленьких
** и больших букв в строке. Например, в строке “Now I see bees,
** I won” больших букв – 3, маленьких – 10. Пробелы и запятые
** буквами не являются.
*/

#include <stdio.h>

void upprelowercase(char *str, int *upp, int *low)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            *low = *low + 1;
        if (str[i] >= 'a' && str[i] <= 'z')
            *upp = *upp + 1;
        i++;
    }
}

int main()
{
    int upp;
    int low;

    upp = 0;
    low = 0;
    char str[250];
    printf("Enter the string: ");
    gets(str);
    upprelowercase(str,  &upp, &low);
    printf("Uppercase letters - %d. Lowercase letters - %d", upp, low);
    return (0);
}
