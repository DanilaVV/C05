#include <stdio.h>
#include <stdlib.h>

int	ft_base(int n)
{
	int	base;

	base = n / 2;
	while (base > 46340 || base * base > n)
		base /= 2;
	return (base);
}

int	ft_sqrt(int nb)
{
	int	base;

	if (nb <= 0)
		return (0);
	base = ft_base(nb);
	while (base * base <= nb)
	{
		if (base * base == nb)
			return (base);
		base++;
	}
	return (0);
}
/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}*/
