/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:58:30 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 23:21:14 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_stuff(char **array_of_map_buffers, t_info *info)
{
	if (info != NULL)
		free(info);
	if (array_of_map_buffers != NULL)
		free(array_of_map_buffers);
}

int	allobs_return_case(char **array_of_map_buffers, \
		t_info *info, int i, t_map *structured_map)
{
	structured_map = parse_buffer(array_of_map_buffers[i], \
			info[i].line_count, info[i].line_length);
	if (array_of_map_buffers[i] != NULL)
		free(array_of_map_buffers[i]);
	print_map(structured_map, &info[i]);
	if (info[i].declared_line_count != NULL)
		free(info[i].declared_line_count);
	if (structured_map != NULL)
		free(structured_map);
	i++;
	return (i);
}

int	handle_valid_maps(char **array_of_map_buffers, t_info *info, \
		int i, t_map *structured_map)
{
	structured_map = parse_buffer(array_of_map_buffers[i], \
			info[i].line_count, info[i].line_length);
	if (array_of_map_buffers[i] != NULL)
		free(array_of_map_buffers[i]);
	find_solution(structured_map, &info[i]);
	free(info[i].declared_line_count);
	if (structured_map != NULL)
		free(structured_map);
	i++;
	return (i);
}

void	handle_map_loops(char **array_of_map_buffers, t_info *info, int argc)
{
	int		i;
	int		map_valid;
	t_map	*structured_map;

	i = 0;
	structured_map = NULL;
	while (i < argc - 1 || argc + i == 1)
	{
		map_valid = is_map_valid(array_of_map_buffers[i], &info[i]);
		if (map_valid == 1)
			i = handle_valid_maps(array_of_map_buffers, \
					info, i, structured_map);
		else if (map_valid == 42)
			i = allobs_return_case(array_of_map_buffers, \
					info, i, structured_map);
		else
		{
			free(array_of_map_buffers[i]);
			ft_putstr("map error\n");
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	char	**array_of_map_buffers;
	t_info	*info;

	array_of_map_buffers = malloc(500 * argc);
	info = malloc(sizeof(t_map) * argc);
	if (argc == 1)
		array_of_map_buffers[0] = read_stdin();
	if (argc > 1)
	{
		free(array_of_map_buffers);
		array_of_map_buffers = read_all_maps(argc, argv);
	}
	handle_map_loops(array_of_map_buffers, info, argc);
	free_stuff(array_of_map_buffers, info);
}
/*
int	main(int argc, char **argv)
{
	char						**array_of_map_buffers;
	int							i;
	t_map						*structured_map;
	struct s_first_line_info	*info;
	int							map_valid;

	array_of_map_buffers = malloc(500 * argc);
	info = malloc(sizeof(t_map) * argc);
	if (argc == 1)
	array_of_map_buffers[0] = read_stdin();
	if (argc > 1)
	{
		free(array_of_map_buffers);
		array_of_map_buffers = read_all_maps(argc, argv);
	}
	i = 0;
	while (i < argc - 1 || argc + i == 1)
	{
		map_valid = is_map_valid(array_of_map_buffers[i], &info[i]);
		if (map_valid == 1)
			i = handle_valid_maps(array_of_map_buffers, info, i, structured_map);
		else if (map_valid == 42)
			i = allobs_return_case(array_of_map_buffers, info, i, structured_map);
		else
		{
			free(array_of_map_buffers[i]);
			ft_putstr("map error\n");
			i++;
		}
	}
	free_stuff(array_of_map_buffers, info);
}*/
