#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{

		for (x = 0; x < n; x++)
		{

			if (x == 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				for (y = 0; y < x; y++)
				{
					_putchar(' ');
				}

				_putchar('\\');

				_putchar('n');
			}
		}
	}
	else
		_putchar('\n');
}
