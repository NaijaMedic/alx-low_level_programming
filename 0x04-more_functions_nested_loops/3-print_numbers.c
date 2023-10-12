#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print numbers followed by a new line
 * Return: 0
 */
void print_numbers(void)
{
	int v;

	for (v = 0; v <= 9; v++)
	{
		_putchar(v + '0');
	}
	_putchar('\n');
}
