#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @m: digit to be printed
 * Return: 0
 */
int print_last_digit(int m)
{
	int j;

	j = m % 10;

	if (m < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
