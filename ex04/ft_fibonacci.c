#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (!index)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	i = 0;
	while(i <= atoi(argv[1]))
	printf("%d\n", ft_fibonacci(i++));
	return (0);
}*/
