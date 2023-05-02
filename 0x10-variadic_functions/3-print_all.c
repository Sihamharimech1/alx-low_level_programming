#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Description: c: char, i: integer
 * f: float, s: char * (if the string is NULL, print (nil) instead
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	char c;
	int num;
	float f;

	while (format && format[i])
	{
		va_start(args, format);

		while (*(format + i))
		{
			j = 1;
			switch (*(format + i))
			{
				case 'c':
					c = va_arg(args, int);
					printf("%c", c);
					break;
				case 'i':
					num = va_arg(args, int);
					printf("%d", num);
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%f", f);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break;
				default:
					j = 0;
					break;
			}
			if (*(format + i + j))
				printf(", ");
			i += j;
		}
		va_end(args);
	}
	printf("\n");
}
