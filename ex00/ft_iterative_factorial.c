#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (!nb)
		return (0);
	res = 1;
	while (nb)
		res *= nb--;
	return (res);
}
/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}*/
