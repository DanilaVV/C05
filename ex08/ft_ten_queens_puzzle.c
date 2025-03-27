#include <unistd.h>
#include <stdio.h>

int	g_ms[10][10];
int	g_ims[10];
int	g_res_ch;
/*void    show(void)
{
        int             i;
        int             j;
        char    c;

        i = 0;
        j = 0;
        while (i < 10)
        {
                while (j < 10)
                {
                        c = '0' + g_ms[i][j];
                        write(1, &c, 1);
                        j++;
                }
                j = 0;
                i++;
                write(1, "\n", 1);
        }
        write(1, "\n", 1);
}*/

void	ft_clear(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
			g_ms[i][j++] = 0;
		g_ims[i] = 0;
		i++;
		j = 0;
	}
}

void	ft_show(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (j < 10)
	{
		while (i < 10)
		{
			if (g_ms[i][j] == 2)
			{
				c = i + '0';
				write(1, &c, 1);
			}
			i++;
		}
		j++;
		i = 0;
	}
	write(1, "\n", 1);
}

int	ft_check(int i_cur, int j_cur)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 10)
	{
		while (i < 10)
		{
			if ((i == i_cur || j == j_cur) && g_ms[i][j] == 2)
				return (0);
			if ((i - j == i_cur - j_cur) && g_ms[i][j] == 2)
				return (0);
			if ((i + j == i_cur + j_cur) && g_ms[i][j] == 2)
				return (0);
			i++;
		}
		i = 0;
		j++;
	}
	return (1);
}

void	ft_fill(int i_cur, int j_cur)
{
	if (i_cur == 0 && j_cur == 0)
		ft_clear();
	if (j_cur == 10)
		return ;
	if (i_cur == 10)
	{
		g_ms[g_ims[j_cur - 1]][j_cur - 1] = 0;
		ft_fill(g_ims[j_cur - 1] + 1, j_cur - 1);
		return ;
	}
	if (!ft_check(i_cur, j_cur))
	{
		ft_fill(i_cur + 1, j_cur);
		return ;
	}
	g_ims[j_cur] = i_cur;
	g_ms[i_cur][j_cur] = 2;
	ft_fill(0, j_cur + 1);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	j;

	g_res_ch = 1;
	ft_fill(0, 0);
	ft_show();
	j = 9;
	while (g_ims[0] != 9 || g_ims[1] != 7 || g_ims[9] != 3)
	{
		i = g_ims[j];
		while (i < 9)
		{
			g_ms[i++][j] = 0;
			if (ft_check(i, j))
			{
				ft_fill(i, j);
				j = 9;
				i = g_ims[j];
				ft_show();
				g_res_ch++;
			}
		}
		g_ms[i][j--] = 0;
	}
	return (g_res_ch);
}
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
