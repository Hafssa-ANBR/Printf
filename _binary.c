#include "main.h"

/**
 * _binary - print a number to binary
 *
 * @num: number parameter to print
 *
 * Return: length of the printed string
*/

int _binary(unsigned int num)
{
	unsigned int i, r, len;
	int q;
	int *tab;

	len = 0;
	i = 1;
	while (i <= num)
	{
		i *= 2;
		len++;
	}
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	i = 0;
	do {
		q = num / 2;
		r = num % 2;
		tab[i] = r;
		i++;
		num = q;
	} while (num != 0);
	for (q = len - 1; q >= 0; q--)
		_putnbr(tab[q]);
	return (len);
}
