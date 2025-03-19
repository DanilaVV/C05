#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
		if (nb % i++ == 0)
			return (0);
	return (1);
}
/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("%d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}*/
