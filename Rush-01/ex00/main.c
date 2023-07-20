/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:12:15 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/09 16:39:47 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	write_string(char *str);
void	setup_grid(char **grid, int n);
int		fill_grid(char **grid, int n, char **args);
int		test_impossible(char **args, int n);

int	get_array_size(char	*str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ') && (str[i] >= '0' && str[i] <= '9'))
		{
			count++;
		}
		else if (str[i] != ' ' || (str[i + 1] < '0' || str[i + 1] > '9'))
		{
			return (0);
		}
		i++;
	}
	if (count % 4 == 0)
	{
		return (count / 4);
	}
	return (0);
}

void	set_arg_str(char *arg, int index, char *argstr, int n)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = -1;
	while (argstr[i] != '\0')
	{
		if (argstr[i] >= '0' && argstr[i] <= '9')
		{
			count++;
			if (count / n == index)
			{
				arg[j] = argstr[i];
				j++;
			}
		}
		i++;
	}
}

int	setup_args(char **args, char *argstr, int n)
{
	int	i;
	int	args_valid;

	args_valid = 0;
	i = 0;
	while (i < n)
	{
		args[i] = malloc(10);
		set_arg_str(args[i], i, argstr, n);
		i++;
	}
	args_valid = test_impossible(args, n);
	return (args_valid);
}

int	main(int argc, char **argv)
{
	int		n;
	char	**args;
	char	**grid;

	if (argc != 2)
	{
		write_string("Error");
		return (1);
	}
	n = get_array_size(argv[1]);
	if (n == 0)
	{
		write_string("Error");
		return (2);
	}
	args = (char **)malloc(100);
	if (setup_args(args, argv[1], n))
	{
		write_string("Error");
		return (3);
	}
	grid = (char **)malloc(100);
	setup_grid(grid, n);
	fill_grid(grid, n, args);
	return (0);
}
