#include "main.h"
/**
 * print_most_numbers - print numbers aside 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int v;

	for (v = 0; v <= 9; v++)
	{
		if (v != 2 && v != 4)
			_putchar(v + '0');
	}
	_putchar('\n');
}
