#include <stdarg.h>
#include "main.h"
#include <unistd.h>


/**
 * print_decimal - Prints a decimal
 * @ptr: Pointer to the va_list containing the string
 * @len: Pointer to the length counter
 */
void print_decimal(int a){
int i = 1, len = 1;
int b = a;
char c;
if(a<0){
    char negative = '-';
    write(1, &negative, 1);
    a = a * (-1);
    b = b * (-1);
}
while ((b / i) >= 10)
{
i *= 10;
len++;
}
while(len>0){
    b = a/i;
    b = b%10;
    c = b + 48;
    write(1, &c, 1);
    i=i/10;
    len--;
}
return (len);
}
