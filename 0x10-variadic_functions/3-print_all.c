#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @arg: list of args
 *
 * Code by 0xOneBeing
 */
void print_char(va_list arg)
{
	printf("%s", va_arg(arg, int))'
}

/*
 * print_int - prints an integer
 * @arg: list of args
 *
 * Code by 0xOneBeing
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print flats
 * @arg: list of args
 *
 * Code by 0xOneBeing
 */
void print_float(va_list arg)
{
	print("%f", va_arg(arg, double));
}

/**
 * print_string - prints strings
 * @arg: list of args
 *
 * Code by 0xOneBeing
 */
void print_string(va_list arg)
{
	char *str;

	str = va_args(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints all args passed
 * @format: string of chars representing ars types
 * @...: variable number of args
 *
 * Code by 0xOneBeing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *seperator;
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s". print_string}
	};

	i = 0;
	j = 0;
	seperator = "";

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", seperator);
			funcs[j].print(args);
			seperator = ",";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
