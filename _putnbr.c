#include "main.h"

/**
 * _putnbr - prints a number to stdout
 *
 * @n: number parameter to print
 *
 * Return: length of the printed string
*/


int _putnbr(int n)
{
	int len = 0;

	if (n >= 0 && n <= 9)
	{
        len++;
		n += 48;
		write(1, &n, 1);
	}
	else if (n >= 10)
	{
		len += _putnbr(n / 10);
		len += _putnbr(n % 10);
	}
	else if (n == -2147483648)
    {
        len += 11;
		write(1, "-2147483648", len);
    }
	else if (n < 0)
	{
        len++;
		write(1, "-", 1);
		len += _putnbr(n * (-1));
	}
    return (len);
}
