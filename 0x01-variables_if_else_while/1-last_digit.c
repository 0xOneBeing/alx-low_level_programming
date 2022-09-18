#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program returns the last digit of a randomly generated number.
 * Return: returns 0 (successful)
 */

int main(void)
{
	int n;
	int mod10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	mod10 = n % 10;
	if (mod10 > 5)
	{
		printf("%d and is greater than 5\n", mod10);
	}
	else if ((mod10 < 6) && (mod10 < 0))
	{
		printf("%d and is less than 6 and not 0\n", mod10);
	}
	else
	{
		printf("%d and is 0\n", mod10);
	}
	return (0);
}
