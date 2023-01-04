#include "main.h"
/**
 * _pow_recursion - Return the value of x the power of y
 * @x:the number to be raised
 * @y: The power
 * Return: x power of y value
 */
int _pow_recursion(int x, int y)
{
	int rs = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	rs *= _pow_recursion(x, y - 1);
	return (rs);
}
