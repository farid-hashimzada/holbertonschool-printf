#include <stdarg.h>
#include <string.h>
#include <unisted.h>
#include "main.h"

/**
 * print_string - print
 * @ptr: parametr
 * @len: lenght
 *
 *
 */

void print_string(va_list ptr, int *len)
{
	char *str = va_arg(ptr, char*);

	if (str == NULL)
	{
		write(1, "(null)", 6);
	}
	else
	{
		write(1, str, strlen(str));
		(*len) += strlen(str);
	}
}
