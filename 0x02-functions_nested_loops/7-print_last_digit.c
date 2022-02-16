#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number integrate
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l <= 0)
		l = -1 * l;
	_putchar(l + '0');
	return (l);
}
