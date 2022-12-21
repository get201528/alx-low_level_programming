#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: a function thar print if a random number is postive ot negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%n is zero\n", n);
	else if (n < 0)
		printf("%n is negative\n", n);
	else
		printf("% is positive\n", n);
	return (0);
}
