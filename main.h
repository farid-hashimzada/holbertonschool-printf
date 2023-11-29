#ifndef PRINT_F
#define PRINT_F

int _printf(const char *format, ...);
int _putchar(char c);

void print_char(va_list ptr, int *len);
void print_string(va_list ptr, int *len);

#endif
