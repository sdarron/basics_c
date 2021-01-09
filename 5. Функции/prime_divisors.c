#include <stdio.h>

/*
** 5.11 Написать функцию void prime_divisors(int n), печатающую
** все простые делители числа n. Для определения, является ли число
** простым, использовать is_prime(). Написать программу, которая
** вводит с клавиатуры число n и печатает все его простые делители.
*/

void prime_divisors(int n);
int is_prime(int n);

void prime_divisors(int n)
{
    int i;

    i = 1;
    while (i <= n)
    {
        if ((n % i == 0) && (is_prime(i) != 0))
            printf(" %d", i);
        i++;
    }
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("All prime divisors is ");
    prime_divisors(n);
    return (0);
}