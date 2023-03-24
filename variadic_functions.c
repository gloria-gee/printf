#include <stdio.h>
#include <stdarg.h>

void sum_numbers(const unsigned int args, ...); // Function Declaration

int main (void)
{
    sum_numbers(3,1,2,3);
}

// Function Definition

void sum_numbers(const unsigned int args, ...)
{
    unsigned int i = 0; 
    int sum = 0;

    va_list arg_ptr; // Macro to store the list data

    va_start(arg_ptr, args); // Initialize the list *arg_ptr of size *args

        for (i = 0; i < args; i++)
        {
            sum += va_arg(arg_ptr, int);
        }

        printf("%d\n", sum);
    
    va_end(arg_ptr);

}

