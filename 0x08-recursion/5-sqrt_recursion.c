#include "main.h"
#include <stdio.h>

/**
 * check_sqrt - checks for the square root of a number
 * @n: number to check
 * @i: iterator
 *
 * Return: square root of n or -1 if not found
 */
int check_sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 *
 * Return: natural square root of n or -1 if not found
 */
int _sqrt_recursion(int n)
{
return (check_sqrt(n, 0));
}

