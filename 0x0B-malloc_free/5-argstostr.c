#include "holberton.h"

/**
 * argstostr - Concats all the agruments.
 * @ac: Argument count.
 * @av: Argument array.
 * Return: New conctonated arguments string.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int idx, cidx, qidx, length;

	for (idx = 0, length = 0; idx < ac; idx++, length++)
	{
		for (cidx = 0; av[idx][cidx] != '\0'; length++, cidx++)
			;
	}

	s = malloc((length + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	if (ac == 0 || av == NULL)
		return (NULL);

	for (idx = 0, qidx = 0; idx < ac; idx++, qidx++)
	{
		for (cidx = 0; av[idx][cidx] != '\0'; qidx++, cidx++)
		{
			s[qidx] = av[idx][cidx];
		}
		s[qidx] = '\n';
	}
	s[qidx] = '\0';

	return (s);
}
