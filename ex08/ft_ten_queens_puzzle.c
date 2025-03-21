#include <unistd.h>

void	ft_clear(int ms[10][10])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
			ms[i][j++] = 0;
		i++;
		j = 0;
	}
}

void	ft_show(int ms[10][10])
{
	int		i;
	int		j;
	char	c;

	while (i < 10)
	{
		while (j < 10)
		{
			if (ms[i][j] == 1)
			{
				c = i + '0';
				write(1, &c, 1);
			}
			j++;
		}
		i++;
		j = 0;
	}
	write(1, "\n", 1);
}

int	ft_check(int ms[10][10], int i_cur, int j_cur)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 10)
	{
		while (i < 10)
		{
			if ((i == i_cur || j == j_cur) && ms[i][j] == 2)
				return (0);
			if ((i - j == i_cur - j_cur) && ms[i][j] == 2)
				return (0);
			if ((i + j == i_cur + j_cur) && ms[i][j] == 2)
				return (0);
			i++;
		}
		i = 0;
		j++;
	}
	return (1);
}

void	ft_fill(int ms[10][10], int i_cur, int j_cur)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!ft_check(ms, i_cur, j_cur))
		return ;
	while (j < 10)
	{
		while (i < 10)
		{
			if (i == i_cur || j == j_cur)
				ms[i][j] = 1;
			if (i - j == i_cur - j_cur || i + j == i_cur + j_cur)
				ms[i][j] = 1;
			i++;
		}
		i = 0;
		j++;
	}
	ms[i_cur][j_cur] = 2;
}

void	show(int ms[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			c = '0' + ms[i][j];
			write(1, &c, 1);
			j++;
		}
		j = 0;
		i++;
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}

int	ft_ten_queens_puzzle(void)
{
	int	ms[10][10];
	int	ch;
	int	i;
	int	j;

	ch = 0;
	i = 0;
	j = 0;
	while

}
int	main(void)
{
	int	i;
	int	j;
	int	ms[10][10];

	i = 0;
	j = 0;
	ft_clear(ms);
	show(ms);
	ft_fill(ms, 3, 7);
	show(ms);
	ft_fill(ms, 4, 6);
	show(ms);
	return (0);
}
