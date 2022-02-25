#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copies
 * @src: copies
 * @n: copies
 *
 * Return: to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, j = 0;


	while (src[a])
		j++;

	for (a = 0; a < n && src[a] != '\0'; a++)

		dest[a] = src[a];

	for (a = j; a < n; a++)

		dest[a] = '\0';


	return (dest);
}
