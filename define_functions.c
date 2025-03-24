#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_string - Prints a string to stdout.
 * @str: The string to be printed.
 *
 * Return: The total number of characters printed.
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str)
		count += _putchar(*str++);
	return (count);
}

/**
 * print_number - Prints an integer to stdout.
 * @n: The integer to be printed.
 *
 * Description: This function recursively prints the digits of an integer.
 * If the integer is negative, a '-' character is printed before the digits.
 * The function converts the integer to an unsigned equivalent for processing.
 * Return: The total number of characters printed.
 */


int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += print_number(num / 10);
	count += _putchar((num % 10) + '0');

	return (count);
}
