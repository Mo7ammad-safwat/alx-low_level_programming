#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits
 * @str: string to check
 *
 * Return: 1 if str contains only digits, 0 otherwise
 */
int is_number(char *str)
{
int i;

for (i = 0; str[i]; i++)
{
if (!isdigit(str[i]))
return (0);
}
return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
long int num1, num2, result;

if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%ld\n", result);
return (0);
}

