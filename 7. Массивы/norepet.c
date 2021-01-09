/*
** 7.12 Напишите программу, которая считает из файла в массив числа
** следующим образом: если очередное считываемое из файла число
** уже было считано до этого (т.е. уже есть в массиве), то оно
** игнорируется, в противном случае оно записывается в массив.
** Выведите исходный и получившийся массивы на экран.
*/

#include <stdio.h>

int main()
{
    FILE *infile;
    FILE *outfile;
    int arr[1000];
    int arr1[1000];
    int arrnorep[1000];
    int i;
    int j;
    int n;
    int k;
    int l;
    
    l = 0;
    k = 0;
    j = 0;
    i = 0;
    infile = fopen("input.txt", "r");
    printf("It is first array: "); 
    while (fscanf(infile, "%d", &n) != -1)
    {
        arr[i] = n;
        printf("%d ", arr[i]);
        ++i;
    }
    k = i;
    i = 0;
    printf("\nIt is array without repetitions: "); 
    while (i < k)
    {
       arrnorep[i] = arr[i];
      // printf("%d ", arrnorep[i]);
       i++;
    }
    i = 0;
    while (i < k)
    {
        j = i + 1;
        while (j < k)
        {
            if (arrnorep[i] == arrnorep[j])
            {
                l = j;
                while (l < k - 1)
                {
                    arrnorep[l] = arrnorep[l + 1];
                    l++;
                }
                --k;
            }
            j++;
        }
        i++;
    }
        
    i = 0;
    while (i < k)
    {
       printf("%d ", arrnorep[i]);
       i++;
    }
    return (0);
}