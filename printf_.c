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
}
