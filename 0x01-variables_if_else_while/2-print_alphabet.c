#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase.
 * Return: 0 (Successful)
 */
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
	putchar(b);
	b++;
	}
	putchar('\n');
	return (0);
}
