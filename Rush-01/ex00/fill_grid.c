/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:22:07 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 16:31:48 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		brute_force(char **grid, int n, char **args);
void	write_string(char *str);

void	fill_min(char **grid, int n, int i, int j)
{
	if (i == 0)
		grid[0][j] = n + '0';
	else if (i == 1)
		grid[n - 1][j] = n + '0';
	else if (i == 2)
		grid[j][0] = n + '0';
	else if (i == 3)
		grid[j][n - 1] = n + '0';
}

void	fill_max_column(char **grid, int n, int i, int j)
{
	int	y;

	if (i == 0)
	{
		y = 0;
		while (y < n)
		{
			grid[y][j] = y + 1 + '0';
			y++;
		}
	}
	else if (i == 1)
	{
		y = 0;
		while (y < n)
		{
			grid[y][j] = n - y + '0';
			y++;
		}
	}
}

void	fill_max_row(char **grid, int n, int i, int j)
{
	int	x;

	if (i == 2)
	{
		x = 0;
		while (x < n)
		{
			grid[j][x] = x + 1 + '0';
			x++;
		}
	}
	else if (i == 3)
	{
		x = 0;
		while (x < n)
		{
			grid[j][x] = n - x + '0';
			x++;
		}
	}
}

void	fill_grid(char **grid, int n, char **args)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < n)
		{
			if (args[i][j] == '1')
				fill_min(grid, n, i, j);
			else if (args[i][j] == n + '0')
			{
				if (i == 0 || i == 1)
					fill_max_column(grid, n, i, j);
				else if (i == 2 || i == 3)
					fill_max_row(grid, n, i, j);
			}
			j++;
		}
		i++;
	}
	if (brute_force(grid, n, args) == 0)
		write_string("Error");
}
