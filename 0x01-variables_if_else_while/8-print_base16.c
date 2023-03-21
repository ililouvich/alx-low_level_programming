#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex[16] = "0123456789abcdef"; /* array to store hexadecimal digits */
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]); /* print each digit using putchar function */
	}
	putchar('\n'); /* print new line character */
	return (0);
}
