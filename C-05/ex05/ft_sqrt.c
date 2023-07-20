/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:33:32 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 18:52:01 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_checker(int x, int nb)
{
	if (nb > 2147395600)
		return (0);
	if ((x * x) > nb)
		return (0);
	if ((x * x) == nb)
		return (x);
	else
		return (ft_sqrt_checker(x + 1, nb));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_checker(1, nb));
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	nb;

	nb = 25;
	x = ft_sqrt(nb);
	printf("The square root of %d is %d \n", nb, x);
	nb = 21473956;
	x = ft_sqrt(nb);
	printf("The square root of %d is %d \n", nb, x);
	nb = 2147483647;
	x = ft_sqrt(nb);
	printf("The square root of %d is %d \n", nb, x);
}*/
