#include <stdio.h>
#include <stdarg.h>
/**
 * printf_ - print 
 *  @format: format
 * Result - length of the output
 */
int printf_(char *format, ...)
{
    va_list args;
    int length = 0;
    va_start(args,format);
    if (format == NULL)
    exit(98);
    while(*format){
        if(*format == '%'){
            format++;
            if(*format == 'c'){
                print_char(va_arg(args,char));
                length++;
            }
            else if(*format == 's'){
                print_string(va_arg(args,char));
                length++;
            }
            else{
                print_char('%');
                print_char(*format);
                length+=2;
            }
        }
        else{
            print_char(*format);
            length++;
        }
        format++;
    }
    return (length);
}
