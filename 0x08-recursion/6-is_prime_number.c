#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check if a number is prime
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_helper(int n, int i)
{
if (i > n / 2)
return (1);
else if (n % i == 0)
return (0);
else
return (is_prime_helper(n, i + 1));
}
