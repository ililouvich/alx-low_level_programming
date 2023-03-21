#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	
	char c = 'A';

    while (c <= 'Z')
    {
        putchar(c);
        c++;
    }
	putchar('\n');

	return (0);
}
