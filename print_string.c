#include <stdio.h>
#include "main.h"
/**
 * print_string - print string
 *  @c: char
 */
void print_string(char *c){
    while(*c){
        print_char(*c);
        c++;
    }
}
