#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program will assign a random number to the variable n each time it is executed
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n % 10 > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5",n,n%10);
	}
	if ( n % 10 == 0 )
	{
		printf("Last digit of %d is 0 and is 0",n);
	}
	if ( n % 10 < 5 &&  n % 10 != 0 )
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",n,n%10);
	}	
	
	return (0);
}
