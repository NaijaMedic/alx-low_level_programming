#include "main.h"
/**
 * _ans - print absolute value of an integer
 * @j: integer to be printed
 * Return: 0
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else if (j >= 0)
	{
		return (j);
	}
	return (0);
}
