#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of the number
 *        stored in the variable n.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int k;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	if (k > 5)

		printf("last digit of %d is %d and is greater than 5\n", n, K);

	else if (k == 0)

		printf("last digit of %d is %d and is 0\n", n, k);

	else  (k < 6 && k != 0);

		printf("last digit of %d is %d and is less than 6 and not 0\n", n, k);


	return (0);
}