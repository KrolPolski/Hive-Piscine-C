/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_maps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:02:52 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 20:48:36 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

int	get_declared_lines(char *map_buffer, t_info *info, int i)
{
	if (map_buffer[i] >= '0' && map_buffer[i] <= '9')
	{
		info->declared_line_count = malloc(i + 3);
		while (i >= 0)
		{
			if (map_buffer[i] >= '0' && map_buffer[i] <= '9')
			{
				info->declared_line_count[i] = map_buffer[i];
				i--;
			}	
			else
				return (0);
		}
		return (1);
	}
	else
		return (0);
}

int	validate_first_line(char *map_buffer, t_info *info)
{
	int	i;

	i = 0;
	if (map_buffer[0] < '0' || map_buffer[0] > '9')
	{
		return (0);
	}
	while (map_buffer[i] != '\0' && map_buffer[i] != '\n')
		i++;
	if (map_buffer[i] == '\n' && i != 0)
	{
		i--;
		info->fill = map_buffer[i];
		info->obstacle = map_buffer[--i];
		info->empty = map_buffer[--i];
		i--;
		if (info->empty == info->obstacle || info->empty == info->fill
			|| info->obstacle == info->fill)
			return (0);
	}
	if ((get_declared_lines(map_buffer, info, i) == 0))
		return (0);
	return (1);
}

int	single_line_length(char *map_buffer, int *ptr_i, t_info *info)
{
	int	line_length;

	line_length = 0;
	while (map_buffer[*ptr_i] != '\n')
	{	
		if (map_buffer[*ptr_i] != info->fill
			&& map_buffer[*ptr_i] != info->empty
			&& map_buffer[*ptr_i] != info->obstacle)
			return (0);
		if (map_buffer[*ptr_i] == info->empty && info->has_free == 0)
			info->has_free = 1;
		line_length++;
		(*ptr_i)++;
	}
	if (map_buffer[*ptr_i] == '\n')
	{
		(info->line_count)++;
		(*ptr_i)++;
	}
	return (line_length);
}

int	check_line_lengths(char *map_buffer, int i,
		t_info *info)
{
	int	line_length;
	int	ref_length;

	info->line_count = 0;
	info->line_length = 0;
	while (map_buffer[i] != '\n')
	{
		i++;
	}
	i++;
	if (map_buffer[i] == '\0' || map_buffer[i] == '\n')
	{	
		return (0);
	}
	ref_length = single_line_length(map_buffer, &i, info);
	while (map_buffer[i] != '\0')
	{
		line_length = single_line_length(map_buffer, &i, info);
		if (line_length != ref_length)
			return (0);
	}
	info->line_length = line_length;
	return (1);
}

int	is_map_valid(char *map_buffer, t_info *info)
{
	int	j;
	int	valid_line_lengths;

	info->line_length = 0;
	j = validate_first_line(map_buffer, info);
	if (j == 0)
	{
		return (0);
	}
	info->has_free = 0;
	if (info->empty == '\0' || info->obstacle == '\0' || info->fill == '\0')
	{
		return (0);
	}
	valid_line_lengths = check_line_lengths(map_buffer, j, info);
	if (valid_line_lengths == 0)
		return (0);
	if (info->has_free == 0)
		return (42);
	if (info->line_count != (int)ft_atoi_error(info->declared_line_count))
		return (0);
	return (1);
}
