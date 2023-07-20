/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:32:11 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 20:51:20 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

int	if_obs_in(t_map *cur_p, int max, t_info *info, t_map *map)
{
	int	i;
	int	j;
	int	k;

	i = cur_p->y;
	while (i <= cur_p->y + max)
	{
		j = cur_p->x;
		while (j <= cur_p->x + max)
		{
			k = i * info->line_length + j;
			if (map[k].c == info->obstacle)
				return (1);
			(cur_p->area = max * max);
			j++;
		}
		i++;
	}
	return (0);
}

int	find_max(t_map *cur_p, t_info *info, t_map *map)
{
	int	max;

	max = 1;
	while ((cur_p->x + max) < info->line_length && \
			(cur_p->y + max) < info->line_count \
			&& !if_obs_in(cur_p, max, info, map))
	{
		max++;
	}
	return (max);
}

void	solution_control(t_map *map, t_info *info)
{
	int	x;
	int	y;
	int	max;
	int	cur_id;

	y = 0;
	while (y < info->line_count)
	{
		x = 0;
		while (x < info->line_length)
		{
			cur_id = y * info->line_length + x;
			map[cur_id].cur_id = cur_id;
			if (map[cur_id].c != info->obstacle)
			{
				max = find_max(&map[cur_id], info, map);
				map[cur_id].a = x + max - 1;
				map[cur_id].b = y + max - 1;
			}
			x++;
		}
		y++;
	}
}

void	find_solution(t_map *map, t_info *info)
{
	int		answer_index;

	solution_control(map, info);
	answer_index = choose_answer(map, info);
	if (answer_index == -1)
	{
		print_map(map, info);
		return ;
	}
	fill_map(map, info, answer_index);
}
