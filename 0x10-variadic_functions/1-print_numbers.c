#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"



/**
 *print_numbers - prints numbers followed bya  new line
 *separator - string to be printed between the numbers
 *@n: the number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	
	
	if(n > 0)
	{
		va_start(ap, n);
		for(n = 0; n < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i != n && separator != NULL)
				printf("%s", separator);	
		}
		va_end(ap);
	}
	
printf("\n");
}
