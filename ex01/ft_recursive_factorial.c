#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(3));
	return (0);
}*/
