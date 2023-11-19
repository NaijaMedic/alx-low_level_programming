#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	int string = 0;

	while (s[string])
	{
		_putchar(s[string]);
		string++;
	}
	_putchar('\n');
}
