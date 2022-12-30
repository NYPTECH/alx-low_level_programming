
FrankyWilson
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x05-pointers_arrays_strings/1-main.c
@FrankyWilson
FrankyWilson added some done projects
 1 contributor
19 lines (18 sloc)  242 Bytes
#include "main.h"
#include <stdio.h>
/**
 * main -> check the code
 *
 * Return: always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a%d, b=%d\n", a, b);
	return (0);
}
