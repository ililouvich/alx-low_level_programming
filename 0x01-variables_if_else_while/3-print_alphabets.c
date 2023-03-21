#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 0; i < 26; i++)
	{
	c = 'A' + i;
	putchar(c);
	}	
	putchar('\n');
	return (0);
}
