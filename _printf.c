#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function to print
 * @format: the format specifier
 * @return: integer
*/

int _printf(const char *format, ...);

int main (void)
{
    /* Tests Here */

    int age = 27;
    char name[] = "seb";
    
    printf("My name is %c and I am %d years old", age, name);
}

/**
*  
*/

int _printf(const char *format, ...)
{
    unsigned int i;

    va_list *args;


}
