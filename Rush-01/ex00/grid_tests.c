/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:10:15 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 17:16:27 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	draw_grid(char **grid, int n);
int		repeat_check(char **grid, int n);

int	check_x_forward(char **grid, int n, int rule, int y)
{
	int	x;
	int	k;
	int	max;

	max = 0;
	k = 0;
	x = 0;
	while (x < n)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			k++;
		}
		x++;
	}
	if (k != rule)
	{
		return (0);
	}
	return (1);
}

int	check_x_backward(char **grid, int n, int rule, int y)
{
	int	x;
	int	k;
	int	max;

	max = 0;
	k = 0;
	x = n - 1;
	while (x >= 0)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			k++;
		}
		x--;
	}
	if (k != rule)
	{
		return (0);
	}
	return (1);
}

int	check_y_down(char **grid, int n, int rule, int x)
{
	int	y;
	int	k;
	int	max;

	max = 0;
	k = 0;
	y = 0;
	while (y < n)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			k++;
		}
		y++;
	}
	if (k != rule)
		return (0);
	return (1);
}

int	check_y_up(char **grid, int n, int rule, int x)
{
	int	y;
	int	k;
	int	max;

	max = 0;
	k = 0;
	y = n - 1;
	while (y >= 0)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			k++;
		}
		y--;
	}
	if (k != rule)
		return (0);
	return (1);
}

int	test_grid(char **grid, int n, char **args)
{
	int	i;
	int	j;
	int	rule;

	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
		{
			rule = args[i][j];
			rule -= '0';
			if (i == 0 && check_y_down(grid, n, rule, j) == 0)
				return (0);
			else if (i == 1 && check_y_up(grid, n, rule, j) == 0)
				return (0);
			else if (i == 2 && check_x_forward(grid, n, rule, j) == 0)
				return (0);
			else if (i == 3 && check_x_backward(grid, n, rule, j) == 0)
				return (0);
		}
	}
	if (repeat_check(grid, n))
		return (1);
	return (0);
}
