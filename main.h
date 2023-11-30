#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);

void print_char(va_list ptr, int *len);
void print_string(va_list ptr, int *len);
void print_decimal(va_list ptr, int *len);
#endif
