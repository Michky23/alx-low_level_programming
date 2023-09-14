#include "variadic_functions.h"

/**
 * print_all - function that print any(thing) argument provided
 * @format: is a list of types of arguments passed to the function
 * Return: anything given based on specified format or (void)
 */

void print_all(const char * const format, ...)

{
	int a, check_stat;
	char *strings;
	va_list specified;

	va_start(specified, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(specified, int));
				check_stat = 0;
				break;
			case 'i':
				printf("%d", va_arg(specified, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(specified, double));
				check_stat = 0;
				break;
			case 's':
				strings = va_arg(specified, char *);
				if (strings == NULL)
					strings = "(nil)";
				printf("%s", strings);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[a +  1] != '\0' && check_stat == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(specified);
}
