#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * print_decimal - Prints a decimal
 * @a: parameter
 * Return: number of characters printed
 */
int print_decimal(int a)
{
    int result = 0;

    if (a < 0)
    {
        write(1, "-", 1);
        result++;
        a = -a;
    }

    int i;

    if (a / 10)
        result += print_decimal(a / 10);

    char c = a % 10 + '0';
    write(1, &c, 1);

    return (result + 1);
}
