#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Description: c: char, i: integer, f: float, s: char * (if the string is
 * NULL, print (nil) instead
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str, *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				j = 1;
				break;
		}
		sep = ", ";
		i += j;
	}
	va_end(args);
	printf("\n");
}
