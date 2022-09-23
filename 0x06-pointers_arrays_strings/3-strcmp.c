#include "main.h"

/**
 * _strcmp - fnction which compares two strings
 * @s1: first string
 * @s2: second string
 * Return:
 *           returns zero if s1 == s2
 *           returns negative if s1 < s2
 *           returns positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
