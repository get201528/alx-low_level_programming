#include "main.h"
/**
 * _stncpy - copy string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_stncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\n';
		j++
	}
	return (dest);
}
