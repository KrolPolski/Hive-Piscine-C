/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:04:23 by dbarrene          #+#    #+#             */
/*   Updated: 2023/07/09 16:54:48 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	draw_grid(char **grid, int n);

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	no_y_repeats(char **grid, int n)
{
	int	x;
	int	y;
	int	prod;

	y = 0;
	while (y < n)
	{
		x = 0;
		prod = 1;
		while (x < n)
		{
			prod *= (grid[y][x] - '0');
			x++;
		}
		if (prod != ft_recursive_factorial(n))
		{
			return (0);
		}
		y++;
	}
	return (1);
}

int	no_x_repeats(char **grid, int n)
{
	int	x;
	int	y;
	int	prod;

	x = 0;
	while (x < n)
	{
		y = 0;
		prod = 1;
		while (y < n)
		{
			prod *= (grid[y][x] - '0');
			y++;
		}
		if (prod != ft_recursive_factorial(n))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	repeat_check(char **grid, int n)
{
	if (no_x_repeats(grid, n) && no_y_repeats(grid, n))
	{
		draw_grid(grid, n);
		return (1);
	}
	return (0);
}
