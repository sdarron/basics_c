#include <stdio.h>

/*
** 7.7 Создайте массив заведомо большого размера (например, из 1000
** элементов), затем считайте в него все числа из файла input.txt.
** После этого найдите количества чисел в этом массиве, которые
** меньше последнего элемента, больше последнего элемента и равны
** последнему элементу последовательности. Сохраните в выходной
** файл сам массив, а также найденные три числа. Информацию,
** выводимую в файл, продублируйте на экран.
*/

int main()
{
    FILE *infile;
    FILE *outfile;
    int arr[1000];
    int i;
    int n;
    int j;
    int more;
    int less;
    int equals;
    
    equals = 0;
    more = 0;
    less = 0;
    j = 0;
    n = 0;
    i = 0;
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    while (fscanf(infile, "%d", &n) != -1)
    {
        arr[i] = n;
        ++i;
    }
    while (j < i)
    {
        if(arr[j] < arr[i - 1])
            less++;
        j++;
    }
    j = 0;
    while (j < i)
    {
        if(arr[j] > arr[i - 1])
            more++;
        j++;
    }
    j = 0;
    while (j < i - 1)
    {
        if(arr[j] == arr[i])
            equals++;
        j++;
    }
    j = 0;
    while (j < i)
    {
        fprintf(outfile, "%d ", arr[j]);
        printf("%d ", arr[j]);
        j++;
    }
    fprintf(outfile, "\nless %d, more %d, equals %d", less, more, equals);
    printf("\nless %d, more %d, equals %d", less, more, equals);
    fclose(infile);
    fclose(outfile);
    return (0);
}