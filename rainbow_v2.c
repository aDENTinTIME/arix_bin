#include <stdio.h>

/**
 * main - Makes a string pretty!
 *
 * @ac: Number of arguments passed to program.
 * @av: Array of strings passed to program.
 * Return: 0 on success, 1 on failure
 */

int main(int ac, char **av)
{
	int i = 0;
	char *colors = "13265";

	if (ac != 2)
	{
		printf("usage: rainbow [word]\n       rainbow [\"multiple words\"]\n");
		return (1);
	}

	while (av[1][0])
	{
		if (!colors[i])
			i = 0;
		printf("\033[0;3%cm", colors[i]);
		printf("%c", av[1][0]);
		printf("\033[0m");
		i++;
		av[1]++;
	}
	printf("\n");

	return (0);
}
