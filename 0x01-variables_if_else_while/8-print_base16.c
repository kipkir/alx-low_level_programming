#include <stdio.h>
#include <stdlib.h>
#include <time>
/**
 *  main -Entry point
 *
 *  Return: Always 0
 */
int main(void)
{
	int f;
	char low;

	for (f = '0'; f <= '9'; f++)
		putchar(f);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
