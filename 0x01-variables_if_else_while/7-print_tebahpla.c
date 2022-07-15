#include <stdio.h>

/**
 * main -  a program that prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch > 96; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
