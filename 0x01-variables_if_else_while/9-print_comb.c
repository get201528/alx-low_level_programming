#include <stdio.h>
/**
 * main - print all possible combination of single nubers
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 0 ; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
