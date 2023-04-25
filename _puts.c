#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string parameter to print
 *
 * Return: length of the printed string
*/

int _puts(char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
