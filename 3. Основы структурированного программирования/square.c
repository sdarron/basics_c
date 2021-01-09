#include <stdio.h>

/*
**  Спросить у пользователя число N и вывести квадрат 
** со стороной размера N следующим образом. 
** Контур квадрата выводится симво- лом #, а внутренности символом +. 
** Например, для N = 4 нужно вывести:
** ####
** #++#
** #++#
** ####
** а для N = 2:
** ##
** ##
*/    

int main()
{
    int n;
    int i;
    int j;

    j = 1;
    i = 1;
    n = 0;
    printf("Input side of square: ");
    scanf("%d", &n);
    while (j <= n)
    {   
        while(i <= n)
        {   
            if(i > 1 && i < n && j > 1 && j < n)
                printf("+");
            else
                printf("#");
            i++;
        }
        printf("\n");
        i = 1;
        j++;
    }
    return (0);
}