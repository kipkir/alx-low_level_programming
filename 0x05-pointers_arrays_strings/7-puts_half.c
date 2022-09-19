#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: input
 * Return: half the input
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\10')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
