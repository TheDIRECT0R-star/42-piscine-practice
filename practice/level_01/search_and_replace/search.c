#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		exit(1);
	}

	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		exit(1);
	}


	int i = 0;

	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
		{
			write(1, &argv[3][0], 1);
		} else {
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

