/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:32:36 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 20:49:03 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_map(t_map *map, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		i++;
	}
	free(map);
}

char	*parse_points(t_parse *params)
{
	int		x;
	int		y;
	char	c;

	y = 0;
	while (y < params->linecount)
	{
		x = 0;
		while (x < params->linelength)
		{
			if (*(params->populate_point) == '\n')
				params->populate_point++;
			c = *(params->populate_point);
			params->map[params->cur_id].x = x;
			params->map[params->cur_id].y = y;
			params->map[params->cur_id].c = c;
			params->cur_id++;
			params->populate_point++;
			x++;
		}
		y++;
	}
	return (params->populate_point);
}

void	parse_map(char *buffer, t_map *map, int linelength, int linecount)
{
	char	*populate_point;
	int		cur_id;
	t_parse	params;

	cur_id = 0;
	populate_point = buffer;
	populate_point = ft_strchr(buffer, '\n');
	while (cur_id < (linelength * linecount))
	{
		populate_point++;
		params.populate_point = populate_point;
		params.map = map;
		params.cur_id = cur_id;
		params.linelength = linelength;
		params.linecount = linecount;
		populate_point = parse_points(&params);
		cur_id = params.cur_id;
	}
}

t_map	*parse_buffer(char *map_buffer, int linecount, int linelength)
{
	t_map	*map;
	int		size;

	size = linecount * linelength;
	map = malloc(size * sizeof(t_map));
	if (map == 0)
	{
		free_map(map, size);
		return (NULL);
	}
	parse_map(map_buffer, map, linelength, linecount);
	return (map);
}
