#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
