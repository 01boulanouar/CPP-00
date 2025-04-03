#include <iostream>
#include <cstring>

int	main(int argc, char *argv[])
{
	int		i;
	size_t	j;
	char 	c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < std::strlen(argv[i]))
		{
			c = argv[i][j];
			if (std::isalpha(c))
				c = std::toupper(c);
			std::cout << c;
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
