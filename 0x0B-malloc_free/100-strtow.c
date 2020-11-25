#include "holberton.h"

/**
 * word_count - Word count in a string
 * @str: String to count.
 * Return: Returns word count.
 */

int word_count(char *str)
{
	int idx = 0, wc = 0, flag = 1;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
			flag = 1;
		else if (flag)
		{
			wc++;
			flag = 0;
		}
	}
	return (wc);
}

/**
 * strtow - Splits a string into words.
 * @str: String to manipulate.
 * Return: Pointer to parsed string.
 */

char **strtow(char *str)
{
	char **m = NULL;
	int idx, qidx, widx = 0, word_len = 0, wc = 0;

	if (str == NULL || str == '\0')
		return (NULL);
	wc = word_count(str);
	if (wc > 0)
		m = malloc(sizeof(char *) * (wc + 1));
	if (m == NULL)
		return (NULL);
	m[wc] = NULL;
	for (idx = 0; str[idx] != '\0'; word_len = 0)
	{
		while (str[idx] != '\0' &&
				(str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n'))
			idx++;
		while (str[idx] != '\0' &&
				str[idx] != ' ' && str[idx] != '\t' && str[idx] != '\n')
		{
			word_len++, idx++;
		}
		if (word_len > 0)
		{
			m[widx] = malloc(sizeof(char) * (word_len + 1));
			if (m[widx] == NULL)
			{
				while (widx > 0)
					free(m[widx--]);
				free(m);
				return (NULL);
			}
			m[widx][word_len] = '\0';
			for (qidx = 0; qidx < word_len; qidx++)
				m[widx][qidx] = str[idx - (word_len - qidx)];
			widx++;
		}
	}

	return (m);
}
