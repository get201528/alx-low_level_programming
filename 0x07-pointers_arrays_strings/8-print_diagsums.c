#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 *  of  a square matrix of an integer
 *  @a: matrix
 *  @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int index;
	int s1;
	int s2;

	for (index = 0; index < size; index++)
	{
		s1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		s2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}
