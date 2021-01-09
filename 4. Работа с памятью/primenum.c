#include <stdio.h>

/*
** 4.3 Составьте программу вывода на экран всех простых чисел,
** не превосходящих заданного N.
*/

int main()
{
    int num;
    int i;
    int k;
    int flag;

    flag = 0;
    k = 1;
    i = 1;
    num = 0;
    printf("Input number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        while(k <= i)
        {
            if (i % k == 0)
                ++flag;
            k++;
        }
        k = 1;
        if (flag == 2)
            printf("%d ", i);
        i++;
        flag = 0;
    }
    

}