#include "main.h"
/**
 * char*_strcpy - a function that copy the string that pointed to by src
 * @des: copy to
 * @src: copy from
 * Return: string
 */
char*_strcpy(char *des, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		des[x] = src[x];
	}
	des[l] = '\n';
	return (des);
}
