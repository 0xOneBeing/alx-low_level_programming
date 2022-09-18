#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *
 * main - Program returns the last digit of a number generated at random 
 * Return: returns 0 (successful)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > (n%10))
	{
		printf("Last digit of %d is ", n, " and is greater than 5\n", n);
	}
	else if ((n < 6) && (n < 0))
	{
		printf("Last digit of %d is ", n, " and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of %d is ", n, " and is 0\n", n);
	}
	return (0);
}
