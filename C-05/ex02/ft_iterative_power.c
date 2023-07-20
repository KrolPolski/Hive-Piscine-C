/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:44:59 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/08 17:53:35 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	running_total;

	running_total = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		running_total = running_total * nb;
		power--;
	}
	return (running_total);
}

/*int	main(void)
{
	int	result;
	int	nb;
	int	power;

	nb = 2;
	power = 16;
	result = ft_iterative_power(nb, power);
	printf("%d to the power of %d = %d \n", nb, power, result);
}*/
