/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:17:23 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/12 13:35:39 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

int	ft_check_even(int nbr)
{
	int	is_it_even;

	if (nbr % 2 == 0)
		is_it_even = 1;
	else
		is_it_even = 0;
	return (is_it_even);
}
typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define EVEN ft_check_even
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
#endif
