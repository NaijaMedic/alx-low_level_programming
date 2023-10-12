#include "main.h"
/**
 * more_numbers - prints 10x the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int m;
	int n;

	m = 0;
	for (n = 0; n <= 14; n++)
	{
		_putchar(n + '0');
	}
	while (m == 10)
		m++;
	_putchar('\n');
}
