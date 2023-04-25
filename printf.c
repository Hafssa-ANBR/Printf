#include "main.h"

/**
 * _printf - prints the given foramt.
 *
 * @format: string parameter to print
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char c, next_c;
	int i, len;

	i = len = 0;
	if (format == NULL)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		c = format[i];
		if (c == '%')
		{
			next_c = format[++i];
			if (next_c == '%')
				len += _putchar('%');
			else if (next_c == 'c')
				len += _putchar(va_arg(args, int));
			else if (next_c == 's')
				len += _puts(va_arg(args, char*));
			else if (next_c == 'i' || next_c == 'd')
				len += _putnbr(va_arg(args, int));
			else
			{
				len += _putchar(format[i - 1]);
				len += _putchar(next_c);
			}
		}
		else
			len += _putchar(c);
		i++;
	}
	va_end(args);

	return (len);
}

