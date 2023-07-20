/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:09:49 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/10 08:52:34 by rboudwin         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	number_of_args;

	number_of_args = argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
}
