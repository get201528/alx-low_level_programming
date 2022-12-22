#include <stdio.h>
/**
 * main - print the alaphapet except e and q
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'a'
	while (ch <=  'z')
	{
		if ((ch != 'e' && ch != 'q') && ch <= 'z')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
