#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 * 
 * Description: 'printing last digit'
 * 
 * 
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int nn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	nn = n % 10;
	printf("Last digit of %d is %d ", n, nn);
	if (nn < 5 && nn != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else if (nn > 5)
	{
		printf("and is greater than 5\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
