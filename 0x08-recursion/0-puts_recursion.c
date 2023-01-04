#include "main.h"
/**
 * _puts_recursion - print a string followd by new line
 * @s:the string to be printe
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
