#include <stdio.h>
#include "main.h"
/**
 *  main - This code prints _putchar
 *
 *  Return: Always 0
 */
int main(void)
{
	char ch[] = '_putchar';
	int h;

	for (h = 0; h < 8; h++)
	{
		_putchar(ch[h]);
	}
	_putchar('\n');

	return (0);
}
