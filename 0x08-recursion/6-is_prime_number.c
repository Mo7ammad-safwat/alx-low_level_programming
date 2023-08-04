
#include "main.h"
#include <stdio.h>

/**
 * check_prime - checks if a number is prime
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
else if (n % i == 0)
return (0);
else if (i * i > n)
return (1);
else
return (check_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

