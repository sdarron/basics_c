#include <stdio.h>

/*
** 5.12 Написать функцию int factorial_2(int n), вычисляющую
** двойной факториал:
** – N!! = 1·3·5·...·N, если N — нечетное;
** – N!! = 2·4·6·...·N, если N — четное.
** С помощью этой функции найти двойной факториал числа,
** вводимого пользователем с клавиатуры.
*/

int factorial_2(int n);

int factorial_2(int n)
{
    int b;
    b = 0;
    b = n - 2;    
    while (b >= 1)
    {
        n = n * b;
        b = b - 2;
    }
    return (n);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("The double factorial is %d.\n", factorial_2(n));
    return (0);
}