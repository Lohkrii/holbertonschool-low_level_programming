#include "holberton.h"

/**
 * get_change - Counts the amount of coins needed.
 * @amount: Ammount of coins needed to change.
 * Return: Coins changed.
 */

int get_change(int amount)
{
	unsigned int change, count_type;
	int types[] = {25, 10, 5, 2, 1};

	for (count_type = 0, change = 0; amount > 0;)
	{
		if (amount >= types[count_type])
		{
			amount -= types[count_type];
			change++;
		}
		else if (amount < types[count_type])
		{
			change++;
		}
	}
	return (change);
}

/**
 * main - Prints the amount of coins you get in.
 * exchange based on the given value.
 * @argc: Argument count.
 * @argv: Argument array.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	unsigned int change = 0, amount;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", change);
		return (0);
	}
	amount = atoi(argv[1]);
	change = get_change(amount);
	printf("%d\n", change);
	return (0);
}
