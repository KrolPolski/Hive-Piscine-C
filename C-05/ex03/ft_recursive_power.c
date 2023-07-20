/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:04:34 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/08 18:52:43 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}
/*
int	main(void)
{
	int	result;
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	result = ft_recursive_power(nb, power);
	printf("%d to the power of %d = %d \n", nb, power, result);
}*/
