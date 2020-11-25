#include "holberton.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: 1st String to be concatonated.
 * @s2: String to append.
 * Return: Returns concatonated string or NULL for failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *str_s;
	int len_s1, len_s2, i, i2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	str_s = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (str_s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		str_s[i] = s1[i];
	}
	for (i2 = 0; i < (len_s1 + len_s2); i++, i2++)
	{
	str_s[i] = s2[i2];
	}
	str_s[i] = '\0';
	return (str_s);
}
