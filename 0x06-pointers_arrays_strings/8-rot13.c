#include "holberton.h"

/**
 * rot13 - Encodes a string into rot13.
 * @s: The string to be encoded.
 * Return: Returns the string thats encoded.
 */

char *rot13(char *s)
{
	int idx;
	int cidx;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (cidx = 0; s[cidx] != '\0'; cidx++)
		{
			if (s[idx] == input[cidx])
			{
				s[idx] = output[cidx];
				break;
			}
		}
	}
	return (s);
}
