#include <stdio.h>
/**
 * main - this program prints -putchar followed by a new line.
 * Return 0 (Successful)
 */
int main(void)
{
	/* This program prints "_putchar" followed by a new line */
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
	putchar(str[i]);
	i++;
	}

	return (0); /* Return value 0 indicates successful execution */
}
