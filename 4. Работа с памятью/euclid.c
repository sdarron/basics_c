#include <stdio.h>

/*
**   4.4 Алгоритм Евклида для нахождения наибольшего общего 
** делителя двух чисел выглядит следующим образом. 
** Даны два числа: a и b. Пока они не равны, 
** вычитать из большего числа меньшее.
*/

int main()
{
    int num1;
    int num2;

    num1 = 0;
    num2 = 0;
    printf("Input two number: ");
    scanf("%d%d", &num1, &num2);
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 = num1 - num2;
        if (num2 > num1)
            num2 = num2 - num1;
    }
    printf("Greater commons divisor: %d", num1);
    return (0);
}