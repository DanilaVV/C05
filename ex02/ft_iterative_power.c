#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	while (power--)
		res *= nb;
	return (res);
}
/*int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
