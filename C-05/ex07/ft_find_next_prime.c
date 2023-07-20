/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:10:24 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 19:09:03 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a < nb)
	{
		if (nb % a != 0)
			a++;
		else
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	nb++;
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int next_prime;
	int nb;
	nb = 2147483645;
	
	next_prime = ft_find_next_prime(nb);

	printf("The next prime number after %d is %d. \n", nb, next_prime);
}*/
