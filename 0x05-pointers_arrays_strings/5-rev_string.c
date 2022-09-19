#include "main.h"

/**
 * rev_string - reverse string
 * @s: input string
 *
 * Description: reverses a string
 * Return: Always (0)
 */
void rev_string(char *s)
{
	int i, j, tmp;

	i = 0;
	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > i)
	{
		tmp = s[j];
		s[j--] = s[i];
		s[i++] = tmp;
	}
}
