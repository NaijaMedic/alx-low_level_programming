#include "main.h"
/**
 * rev_string - fxn that reverses a string
 * @s: string to be printed
 * Return: always 0
 */
void rev_string(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
	{
		_putchar(s[start]);
	}
}
