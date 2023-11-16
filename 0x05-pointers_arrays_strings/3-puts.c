#include <stdio.h>
#include "main.h"

/**
 * _puts - print character string
 * @char: character to be printed
 * @str: string
 */

void _puts(char *str)
{
	int j = 0;

	while str[j]
	{
		_putchar(str[j]);
		j++;
	}
	_putchar("/n");
}
