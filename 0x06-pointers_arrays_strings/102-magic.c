#include <stdio.h>

/**
* main -  Add one line print a[2] = 98, followed by a new line.
*
* Return: 0 (successful)
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(a + 2) = 98;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
