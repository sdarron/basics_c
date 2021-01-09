#include <stdio.h>
#include <math.h>

/*
** 4.7 Начальный вклад в банке равен 1000 руб. Через каждый месяц
** размер вклада увеличивается на P процентов от имеющейся суммы
** (P – вещественное число, 0 < P < 25). По данному P определить,
** через сколько месяцев размер вклада превысит 1100 руб., и вывести
** найденное количество месяцев K (целое число) и итоговый размер
** вклада S (вещественное число).
*/

int main()
{
    float p;
    int k;
    float s;
    printf("Input percent ");
    scanf("%f", &p);
    if (p > 0 && p < 25)
    {
        k = (int)(log(1.1) / log(p / 100 + 1)) + 1;
        printf("After %d mounths the deposit will be to 1100 rub.\n", k);
        s = 1000 * pow ((p * 0.01 + 1), k );
        printf("Total deposit %f rub.", s);
    }
    else 
        printf("Persent should be more 0 and less 25.");
    return (0);
}