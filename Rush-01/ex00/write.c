/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:05:00 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/09 15:22:10 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	write_string(char *str)
{
	while (*str != '\0')
	{
		put_char(*str);
		str++;
	}
	put_char('\n');
}

void	draw_grid(char **grid, int n)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			put_char(grid[y][x]);
			if (x < n - 1)
				put_char(' ');
			x++;
		}
		put_char('\n');
		y++;
	}
}
