#include "basic_comment_creator_v1.h"

/*
 * makes a pretty comment section.
 */


int main(void)
{
	char *line, **array;
	size_t buffer;
	int i = 0, ii = 0;

	array = malloc(sizeof(char *) * 10);

	printf("/**\n * ");
	printf("\x1b[7;33m");

	while (getline(&line, &buffer, stdin) != EOF)
	{
		printf("\x1b[0m");
		array[i] = strdup(line);
		printf(" * ");
		printf("\x1b[7;33m");
		i++;
	}

	printf("\x1b[0m");
	printf("\x1b[0;32m");
	printf("\n\n/**\n");
	ii = 0;
	while (ii < i)
	{
		if (!strcmp(array[ii], "\n"))
			printf(" *\n");
		else
			printf(" * %s", array[ii]);
		ii++;
	}
	printf(" */\n");
	printf("\x1b[0m");

	free(line);
	return (0);
}
