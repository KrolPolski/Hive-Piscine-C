/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:28:18 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/10 10:26:34 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	letter;
	int		i;

	i = 0;
	letter = str[0];
	while (str[i] != '\0')
	{
		ft_putchar(letter);
		i++;
		letter = str[i];
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_sort(int argc, char **argv)
{
	int		j;
	int		k;
	char	*temp_ptr;

	k = 1;
	j = 1;
	while (j < argc && k <= argc)
	{
		while (j + k < argc)
		{
			if (ft_strcmp(argv[j], argv[j + k]) >= 0)
				k++;
			else if (ft_strcmp(argv[j], argv[j + k]) < 0)
			{
				temp_ptr = argv[j];
				argv[j] = argv[j + k];
				argv[j + k] = temp_ptr;
				j = 1;
				k = 1;
			}
		}
	k = 1;
	j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort(argc, argv);
	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
}
