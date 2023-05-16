#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: input
 * @argv: character
 * Return: 0 success otherwise failure
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int a, lstcent = 0, cash = atoi(argv[1]);
	int cent[] = {25, 10, 5, 2, 1};

	for (a = 0; a < 5; a++)
	{
		if (cash >= cent[a])
		{
			lstcent += cash / cent[a];
			cash = cash % cent[a];
			if (cash % cent[a] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", lstcent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
