#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string one.
 * @s2: string two to compare with s1.
 * Return: The difference between s1 and s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++, s2++;
	}
	return (*s1 - *s2);
}