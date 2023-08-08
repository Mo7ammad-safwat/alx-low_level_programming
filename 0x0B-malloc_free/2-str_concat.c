#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly concatenated string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
char *new_str;
int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

new_str = malloc((len1 + len2 + 1) * sizeof(char));

if (new_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];

for (j = 0; j < len2; j++)
new_str[i + j] = s2[j];

new_str[len1 + len2] = '\0';

return (new_str);
}

