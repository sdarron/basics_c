#include <stdio.h>

/*
** 4.9 Распечатать все совершенные числа в диапазоне от 1 до 1000.
** Напечатайте все делители для каждого совершенного числа.
*/

int main()
{
    int i;
    int l;
    int sum;
    int j;

    i = 1;
    l = 2;
    j = 1;
    sum = 0;
    while (l <= 1000)
    {
        while (i < l)
        {
            if (l % i == 0)
                sum = sum + i;
            i++;
        }
        if (sum == l)
        {
            printf("\n%d, ", l);
            printf("deviders: ");
            while (j < l)
            {    
                if (l % j == 0)
                    printf("%d ", j);
                j++;        
            }
            j = 1;
        }
        l++;
        sum = 0;
        i = 1;
    }
    return (0);    
}