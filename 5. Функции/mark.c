# include <stdio.h>

/*
** 5.8 Написать функцию void mark(int val, int *markVal), которая
** принимает на вход балл в диапазоне от 0 до 100 и возвращает через
** параметр-указатель markVal оценку, соответствующую этому баллу
** согласно следующим правилам: 0-49 – 2, 50-69 – 3, 70-84 – 4, 85-100
** – 5. Реализуйте программу, которая просит ввести балл с клавиатуры,
** а затем выводит соответствующую ему оценку.
*/

void mark(int val, int *markval);

void mark(int val, int *markval)
{
    if (val >= 0 && val <= 49)
        *markval = 2;
    if (val >= 50 && val <= 69)
        *markval = 3;
    if (val >= 70 && val <= 84)
        *markval = 4;
    if (val >= 85 && val <= 100)
        *markval = 5;
}

int main()
{
    int val;
    int markval;

    printf("Input value: ");
    scanf("%d", &val);
    mark(val, &markval);
    printf("Mark is %d", markval);

    return (0);
}