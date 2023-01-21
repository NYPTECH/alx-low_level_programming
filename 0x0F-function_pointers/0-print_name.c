
Sign up

mubareksd
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
 main 
alx-low_level_programming/0x0F-function_pointers/0-print_name.c

mubareksd past task
 1 contributor
20 lines (18 sloc)  265 Bytes
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: is pointer
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
