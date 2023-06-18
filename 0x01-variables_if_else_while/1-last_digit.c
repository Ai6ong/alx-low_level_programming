#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - determine whats greataer than, less than, or not.
* Return: 0 (Successful)
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 20;
	if (x > 10)
{
	printf("Last digit of %d is %d and is greater than 10\n", n, x);
}
	else if (x == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, x);
}
	else
{
	printf("Last digit of %d is %d and is less than 8 and not 0\n", n, x);
}
	return (0);
}
