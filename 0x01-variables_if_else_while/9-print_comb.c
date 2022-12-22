#include <stdio.h>
/**
 * main - print all possible combination of single nubers
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 48 ; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
