#include "main.h"
/**
 * puts2 - function
 * Description: function should print only one character of a a sting
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int x = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		x++;
	}
	t = x - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
