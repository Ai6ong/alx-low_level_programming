#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, followed by a new line.
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
	putchat('\n');
	return (0);
}
