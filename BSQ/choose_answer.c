/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_answer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:09:43 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 20:44:47 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	choose_answer(t_map *map, t_info *info)
{
	int	i;
	int	j;
	int	max_area;

	i = 0;
	max_area = 0;
	while (i < info->line_count * info->line_length)
	{
		if (map[i].area > max_area)
		{
			max_area = map[i].area;
			j = i;
		}
		i++;
	}
	return (j);
}

void	fill_map(t_map *map, t_info *info, int answer_index)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (map[answer_index].y + i <= map[answer_index].b)
	{
		while (map[answer_index].x + j <= map[answer_index].a)
		{
			map[answer_index + j + k].c = info->fill;
			j++;
		}
		i++;
		j = 0;
		k += info->line_length;
	}
	print_map(map, info);
}	

void	print_map(t_map *map, t_info *info)
{
	int	i;

	i = 0;
	while (i < info->line_length * info->line_count)
	{
		ft_putchar(map[i].c);
		i++;
		if (i % info->line_length == 0)
			ft_putchar('\n');
	}
}
