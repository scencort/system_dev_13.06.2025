/*
Подвиг 2. В программе ниже объявите функцию с именем show_info без параметров и без возвращаемого значения.
Функция show_info должна выводить в консоль строку (без кавычек и с символом переноса на следующую строку):
"It's my first function"
В функции main вызовите функцию show_info.
*/

#include <stdio.h>

void show_info(void) {
    printf("It's my first function\n");   
}

int main(void)
{
    // здесь продолжайте функцию main
    show_info();
    return 0;
}