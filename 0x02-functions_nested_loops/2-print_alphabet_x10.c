#include "main.h"

/**
 *Prints 10 times the alphabet in lowercase
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
