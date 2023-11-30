#include <stdio.h>
#include <unistd.h>

/**
 * print_char - print char
 *  @c: char
 */

void print_char(char c){
    write(1, &c, 1);
}
