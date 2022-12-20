#include "main.h"
/**
 * char*_strcpy - a function that copy the string that pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char*_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\n';
	return (dest);
}
