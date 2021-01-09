/*
** 7.13 Решето Эратосфена – простой алгоритм нахождения всех
** простых чисел до некоторого целого числа n, созданный
** древнегреческим математиком Эратосфеном.
** Рассмотрим пример для n = 20. Запишем натуральные числа от 2 до
** 20, в ряд:
** 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
** Первое число в списке 2 – простое. Пройдем по ряду чисел,
** вычеркивая все числа, кратные 2 (кроме самой двойки):
** 2 3 5 7 9 11 13 15 17 19
** Следующее невычеркнутое число 3 – простое. Пройдем по ряду
** чисел, вычеркивая все числа, кратные 3 (кроме самой тройки):
** 2 3 5 7 11 13 17 19
** И так далее пока квадрат очередного невычеркнутого числа
** меньше n.
** Напишите программу, которая спрашивает у пользователя число N,
** заполняет заранее созданный массив N натуральными числами,
** а затем использует вышеизложенный алгоритм для нахождения всех
** простых чисел на отрезке [2,N], выводя при этом все шаги работы
** данного алгоритма. Т.е. сначала надо вывести весь массив, затем
** вывести содержимое массива, когда из него удалены числа, кратные
** 2, и т.д. Операцию вычеркивания можно заменить обнулением
** соответствующих элементов массива.
*/

#include "stdio.h"

int main()
{
    int arr[1000];
    int n;
    int i;
    int k;
    int l;

    printf("Enter namber: ");
    scanf("%d", &n);
    while (i <= n)
    {
        arr[i] = i;
        printf("%3d ", arr[i]);
        i++;
    }
    printf("\n");
    i = 2;
    while (i * i <= n)
    {
        if (arr[i] != 0)
        {
            k = i * i;
            while (k <= n)
            {
                arr[k] = 0;
                k = k + i;
            }
        }
        l = 0;
        while (l <= n)
        {
            printf("%3d ", arr[l]);
            l++;
        }
        printf("\n");
        i++;
    }
    return (0);
}