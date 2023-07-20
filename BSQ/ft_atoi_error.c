/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:20:17 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 23:29:08 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoi_check(char *str, int a, int sign, int i)
{
	while (str[i] != '\0')
	{
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = sign * -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			a = a * 10 + (str[i] - '0');
			i++;
		}
		i++;
		return (sign * a);
	}
	return (0);
}

int	ft_atoi_error(char *str)
{
	int	a;
	int	sign;
	int	i;
	int	r;

	i = 0;
	a = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	sign = 1;
	r = ft_atoi_check(str, a, sign, i);
	return (r);
}
