#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - get the modulue of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_mod(int a, int b)
{
return (a % b);
}
