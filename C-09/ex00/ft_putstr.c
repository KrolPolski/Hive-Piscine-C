/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:31:05 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/16 07:52:33 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
