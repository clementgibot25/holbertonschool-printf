#include "main.h"
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
