#include "main.h"
/**
 * puts2 - print character starting with first character
 * @str: string to be printed
 * Return: always 0
 */
void puts2(char *str)
{
	int m = 0;
	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}
