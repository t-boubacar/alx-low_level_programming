#include"main.h"

/**
 * _strncat: concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			dest[i] = src [j];
		}
	}
	return (dest);
}
