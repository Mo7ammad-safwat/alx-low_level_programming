#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143;
long int maxPrime = -1;
int i;

while (n % 2 == 0)
{
maxPrime = 2;
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
maxPrime = i;
n /= i;
}
}

if (n > 2)
maxPrime = n;

printf("%ld\n", maxPrime);

return (0);
}

