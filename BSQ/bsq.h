/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:30:45 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 21:30:54 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BSQ_H
# define BSQ_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_grid_point
{
	int		x;
	int		y;
	int		a;
	int		b;
	int		area;
	char	c;
	int		cur_id;
}	t_map;

typedef struct s_parse
{
	char	*populate_point;
	t_map	*map;
	int		cur_id;
	int		linelength;
	int		linecount;
}	t_parse;

typedef struct s_first_line_info
{
	char	*declared_line_count;
	char	empty;
	char	obstacle;
	char	fill;
	int		line_count;
	int		has_free;
	int		line_length;
}	t_info;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	*create_buffer(char *filename);
char	*read_stdin(void);
char	**read_all_maps(int argc, char **argv);
t_map	*parse_buffer(char *map_buffer, int linecount, int linelength);
int		is_map_valid(char *map_buffer, t_info *info);
void	find_solution(t_map *structured_map, t_info *info);
int		ft_atoi_error(char *str);
char	*ft_strchr(char *str, int c);
int		check_line_lengths(char *map_buffer, int i, t_info *info);
int		single_line_length(char *map_buffer, int *ptr_i, t_info *info);
int		validate_first_line(char *map_buffer, t_info *info);
void	print_map(t_map *map, t_info *info);
void	fill_map(t_map *map, t_info *info, int answer_index);
int		choose_answer(t_map *map, t_info *info);
#endif
