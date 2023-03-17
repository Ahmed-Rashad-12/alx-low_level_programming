#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/*
 * main - the main function
 * Return: set for zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf ("Last digit of %d is and is greater than 5" , n);
	if (n == 0)
                printf ("Last digit of %d is and and is 0" , n);
	if (n > 0 && n < 6)
                printf ("Last digit of %d is and is less than 6 and not 0" , n);
	return (0);
}
