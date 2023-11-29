#include <stdio.h>
#include <stdarg.h>

void printf_(const char* format, ...)
{
va_list args;
va_start(args, format);
while(*format != '\0')
{
  if(*format == '%')
    {
      format++;
      if(format == 'c')
	print_char(va_arg(args, char*));
    }
  format++;
}
}


