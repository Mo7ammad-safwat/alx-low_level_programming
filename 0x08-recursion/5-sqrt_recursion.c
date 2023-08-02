#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (_sqrt(n, 0));
}

/**
 * _sqrt - helper function to find the square root of a number
 * @n: number to find the square root of
 * @i: iterator
 *
 * Return: natural square root of n
 */
int _sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (_sqrt(n, i + 1));
}

