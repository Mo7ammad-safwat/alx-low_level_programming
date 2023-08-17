#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str;
int i = 0;
int first = 1;

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", first ? "" : ", ", va_arg(args, int));
first = 0;
break;
case 'i':
printf("%s%d", first ? "" : ", ", va_arg(args, int));
first = 0;
break;
case 'f':
printf("%s%f", first ? "" : ", ", va_arg(args, double));
first = 0;
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", first ? "" : ", ", str);
first = 0;
break;
}
i++;
}
printf("\n");
va_end(args);
}

