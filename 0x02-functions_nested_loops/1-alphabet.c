#include "main.h"

/**
 * main - prints the alphabet.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}

	_putchar('\n');
}
