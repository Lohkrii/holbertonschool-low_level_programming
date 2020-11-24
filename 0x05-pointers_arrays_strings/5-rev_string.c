#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 */

void rev_string(char *s)
{
	int idx, ridx = 0, eidx;
	char rev_s;

	for (idx = 0; s[idx] != '\0'; idx++)
		;
	ridx = (idx - 1);
	for (eidx = 0 ; ridx >= idx / 2; eidx++, ridx--)
	{
		rev_s = s[ridx];
		s[ridx] = s[eidx];
		s[eidx] = rev_s;
	}
}
