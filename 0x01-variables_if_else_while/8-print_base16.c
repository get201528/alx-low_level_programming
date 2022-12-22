#include <stdio.h>
/**
 * main - print all number of small letter in base 16
 * Return: 0
 */
int main(void)
{
	char c;
	int d;

	c = 'a';
	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (c <= 'f')
	{
		putchar (c);
		c++;
	}
	putchar('\n');
	return (0);
}
