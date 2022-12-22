#include <stdio.h>
/**
 * main - print the alaphapet except e and
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <=  'z')
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
