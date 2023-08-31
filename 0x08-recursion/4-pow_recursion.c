#include "main.h"
/**
 * _pow_recursion - x raised by the power of y
 * @x: value to raise
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
