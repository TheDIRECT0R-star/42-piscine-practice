#include <unistd.h>


int main(int argc, char **argv)
{
	int i = 0;
	int in_word = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	while(argv[1][i])
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}

		if (argv[1][i] && in_word)
		{
			write(1, " " ,1);
		}

		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			in_word = 1;

			i++;
		}
	
	}
	write(1, "\n", 1);
	return 0;
}
