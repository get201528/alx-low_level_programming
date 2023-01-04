#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 *  of  a square matrix of an integer
 *  @a: matrix
 *  @size: size of the matrix
 *  Return: 0
 */
void print_diagsums(int *a, int size)
{
	int index, s1, s2;

	s1 = 0;
	s2 = 0;

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
