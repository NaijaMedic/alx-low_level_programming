#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: always 0
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
