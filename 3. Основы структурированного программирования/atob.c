#include <stdio.h>

/*
** 3.18 Даны два целых числа A и B (A < B). 
** Вывести в порядке убывания все целые числа, 
** расположенные между A и B (не включая числа A и B),
** а также количество напечатанных чисел.
*/

int main()
{
    int a;
    int b;
    int c;
    int i;

    i = 0;
    a = 2;
    b = 9;
    c = b - 1;
    while(c > a)
    {
        printf("%d ", c);
        c--;
        i++;
    }
    printf("Count namber = %d", i);
    return 0;
}
