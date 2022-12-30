#include "main.h"
/**
 * _atoi -> converts a string to an integer.
 * @s: a parameter
 * Return: Nothing
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
