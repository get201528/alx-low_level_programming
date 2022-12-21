#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: a function thar print if a random number is postive ot negative
 * @n: an integer variable
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("is zero");
	else if (n < 0)
		printf("is negative");
	else
		printf("is positive");
	return (0);
}
