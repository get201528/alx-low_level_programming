#include "main.h"
/**
 * _strlen - return length of the string
 * @s: string
 * Return: lenngth
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
