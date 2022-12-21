#include <stdlib.h>
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
		printf("is zero\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is positive\n");
	return (0);
}
