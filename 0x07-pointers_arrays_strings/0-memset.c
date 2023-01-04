#include "main.h"
/**
 * _memset - fills n byte of the memory area pointed  by @s with
 * the constant byte @c.
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled.
 * description_memset: over there
 *
 * Return: A pointer to the filled memory are @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
