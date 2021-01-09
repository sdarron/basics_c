#include <stdio.h>

/*
** 5.4 Написать функцию int is_prime(int n), проверяющую, что
** переданное ей целое число – простое. Вывести все простые числа от
** 1 до 100.
*/

int is_prime(int n);

int is_prime(int n)
{
    int i;
  
    i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (n);
}

//int main()
//{
//    int i;
//    i = 1;
    
//    while (i <= 100)
//    {
//        if (is_prime(i) != 0)
//            printf("%d ", is_prime(i));        
//        i++;
//    }
 //   return (0);
//}