/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 09:14:52 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/01 15:37:28 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(int i, int x, int j, int y)
{
	while (i <= x)
	{	
		if ((i == 1 && j == 1) || (i == 1 && j == y))
		{
			ft_putchar('A');
			i++;
		}
		else if ((i == x && j == 1) || (i == x && j == y))
		{
			ft_putchar('C');
			i++;
		}
		else if ((1 < i && i < x) && (1 < j && j < y))
		{
			ft_putchar(' ');
			i++;
		}
		else
		{
			ft_putchar('B');
			i++;
		}
	}
}

void	print_column(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		print_row(i, x, j, y);
		j++;
		ft_putchar('\n');
	}
}	

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_column(x, y);
	}
	else
	{
		write(1, "the x and y values need to be positive\n", 39);
	}
}
