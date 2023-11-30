#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
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
                //if(va_arg(args,char) != '\0'){
                print_char(va_arg(args,int));
                length++;
                //}
            }
            else if(*format == 's'){
                print_string(va_arg(args,char*));
                length++;
            }
            else{
                print_char('%');
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
