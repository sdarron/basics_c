
#include <stdio.h>

int get_prime(int i);
int is_prime(int n);

int main()
{
    int n;

    n = 0;
    printf("Enter the sequence number of the Prime number: ");
    scanf("%d", &n);
    printf("Prime number is %d", get_prime(n));
    return (0);
}