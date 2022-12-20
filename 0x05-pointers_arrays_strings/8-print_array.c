#include "main.h"
/**
 * print_array - a function that print n element of array
 * @a: array name
 * @n: is the no of element of arrys tobe printed
 * Return: a and n inpus
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
if (i == (n - 1))
{
	printf("%d", a[n - 1]);
}
printf("\n");
}
