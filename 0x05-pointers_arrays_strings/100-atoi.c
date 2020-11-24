#include "holberon.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: Returns the converted string.
 */

int _atoi(char *s)
{
	int sidx = 0, idx = 0;
	int chng;
	int signal = 1, strtd = 0;

	while (s[idx] != '\0')
	{
		chng = s[idx];
		if (strtd && (chng < '0' || chng > '9'))
			break;
		if (chng == '-')
			sign *= -1;
		if (chng >= '0' && chng <= '9')
		{
			strtd = 1;
			sidx = sidx * 10 + (chng - 48) * signal;
		}
		idx++;
	}

	return (n);
}
