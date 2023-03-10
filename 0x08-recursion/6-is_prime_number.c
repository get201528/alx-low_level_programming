#include "main.h"
/**
 * is_divisible - check if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 * Return: If the num divisible-0 or if the num is not divisibe - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
