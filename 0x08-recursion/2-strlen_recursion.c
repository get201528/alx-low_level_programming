#include "main.h"
/**
 * _strlen_recursion - Return the lenght of a sting
 * @s: The string to be printed
 */
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s)
	{
		ln++;
		ln += _strlen_recursion(s + 1);
	}
	return (ln);
}
