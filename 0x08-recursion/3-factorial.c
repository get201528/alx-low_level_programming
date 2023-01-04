#include "main.h"
/**
 * factorial - Return the factorial of anumer
 * @n: the number to find factorial
 * Return: if n > 0 factorial n & if n < 0 - 1 indicate an error
 */
int factorial(int n)
{
	int facto = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	facto *= factorial(n - 1);
	return (facto);
}
