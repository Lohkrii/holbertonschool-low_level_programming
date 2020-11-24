#include "holberon.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: Returns the converted string.
 */

int _atoi(char *s)
{
	int sidx = 0, signal = 1;
	int idx = 0, flag = 0;
	int change;

	for (; s[idx] != '\0'; idx++)
	{
		change = s[idx];
		if (flag && (change < '0' || change > '9'))
			break;
		if (change == '-')
			signal *= -1;
		if (change >= '0' && change <= '9')
		{
			flag = 1;
			sidx = sidx * 10 + (change - 48) * signal;
		}
	}
	return (sidx);
}
