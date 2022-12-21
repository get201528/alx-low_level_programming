#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description - rint the last digit of a random number
 * Return: 0
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r == 0)
		printf("Last digit of %d is %d and is zero\n", n, r);
	else if (r  < 6)
		printf("Last digit of %d is %d and is lessthan 6 and is not zero\n", n, r);
	else
		printf("Last digit of %d is %d and is greaterthan 5\n", n, r,);
	return (0);
}
