#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * It achieves this by using a nested loop to iterate through
 * the alphabet ten times.
 */
void print_alphabet_x10(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
}
