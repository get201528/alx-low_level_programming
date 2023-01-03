#include "main.h"
/**
 * _memset - fills n byte of the memory area pointed  by @s with
 * the constant byte @c.
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled.
 * description_memset: over there
 *
 * Return: A pointer to the filled memory are @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
