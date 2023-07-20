/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_force.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:17:22 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 14:27:08 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_grid(char **grid, int n, char **args);

int	get_next_zero(char **grid, int n, int *xy)
{
	int	x;
	int	y;

	y = 0;
	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			if (grid[y][x] == '0')
			{
				xy[0] = x;
				xy[1] = y;
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int	brute_force(char **grid, int n, char **args)
{
	int	xy[2];
	int	value;
	int	valid_grid;

	if (get_next_zero(grid, n, xy))
	{
		value = 1;
		while (value <= n)
		{
			grid[xy[1]][xy[0]] = value + '0';
			valid_grid = brute_force(grid, n, args);
			if (valid_grid)
				return (1);
			value++;
		}
		grid[xy[1]][xy[0]] = '0';
	}
	else
	{
		return (test_grid(grid, n, args));
	}
	return (0);
}
