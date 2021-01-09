#include <stdio.h>

/*
** 5.10 Написать функцию int get_prime(int i), возвращающую i-е
** по счету простое число. Для определения, является ли число
** простым, использовать функцию is_prime(). Написать программу,
** которая вводит с клавиатуры число n и печатает n-ое простое число.
*/


int is_prime(int n);
int get_prime(int i);

int get_prime(int i)
{
    int num;
    int k;
    
    k = 1;
    num = 2;
    while (k < i)
    {
        ++num;
        if (is_prime(num) != 0)
            k++;
    }
    return (num);
}

int main()
{
    int n;

    n = 0;
    printf("Enter the sequence number of the Prime number: ");
    scanf("%d", &n);
    printf("Prime number is %d", get_prime(n));
    return (0);
}
