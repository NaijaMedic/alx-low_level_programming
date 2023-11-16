#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string character
 * @str: string
 * Return: always 0
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
