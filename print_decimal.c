#include <stdio.h>
#include "main.h"

/**
 * print_decimal - print decimal
 * @a: a
 */

void print_decimal(int a){
int i = 1;
int b = a;
while ((b / i) > 10)
{
i *= 10;
}
while (a > 1)
{
b = a / i;
a = a % i;
char c = b + 48;
write(1, &c, 1);
i /= 10;
}
}
