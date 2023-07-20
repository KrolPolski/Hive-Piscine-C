/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:31:05 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/05 13:26:00 by rboudwin         ###   ########.fr       */
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

	letter = *str;
	while (*str != '\0')
	{
		ft_putchar(letter);
		str++;
		letter = *str;
	}	
}

/*int	main(void)
{
	ft_putstr("So long and thanks for all the fish");
}*/
