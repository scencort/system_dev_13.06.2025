/*
Подвиг 5. Напишите программу, которая читает из входного потока три целых числа, записанных в одну строчку через пробел, и вычисляет их сумму с помощью функции get_sum2. Эта функция должна принимать два целых числа, а возвращать - одно целое число (сумму от двух переданных чисел). 
Функцию get_sum2 необходимо вызвать (возможно несколько раз) для вычисления суммы трех прочитанных целых чисел. 
Выведите результат итогового вычисления в консоль в виде целого числа.
*/

#include <stdio.h>

int get_sum2(int x, int y)
{
    return x + y;
}

int main(void)
{
    // здесь продолжайте функцию main
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int resultat = get_sum2(a, get_sum2(b, c));
    printf("%d", resultat);
    return 0;
}