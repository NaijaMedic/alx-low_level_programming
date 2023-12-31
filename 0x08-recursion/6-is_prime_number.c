#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - finding the prime number
 * @n: inputted integer
 * Return: always zero
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - actual prime number
 * @n: prime number
 * @i: iterate number
 * Return: always zero
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
