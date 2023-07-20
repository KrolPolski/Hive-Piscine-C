/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:26:19 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 15:30:49 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	zero_grid(char **grid, int n)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			grid[y][x] = '0';
			x++;
		}
		y++;
	}
}

void	setup_grid(char **grid, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		grid[i] = malloc(10);
		i++;
	}
	zero_grid(grid, n);
}
