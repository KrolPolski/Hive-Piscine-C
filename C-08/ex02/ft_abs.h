/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:51:03 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/12 15:44:41 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_absolute_value(int Value)
{
	if (Value < 0)
		return (-Value);
	else
		return (Value);
}
# define ABS(Value) ft_absolute_value(Value)
#endif
