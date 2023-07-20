/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:55:55 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 19:11:03 by rboudwin         ###   ########.fr       */
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

/*#include <stdio.h>
int main(void)
{
	int prime;
	int nb;
	nb = -2147483647;
	
	prime = ft_is_prime(nb);

	if (prime == 1)
		printf("%d is a prime number \n", nb);
	else if (prime == 0) 
		printf("%d is not a prime number \n", nb);
	else
		printf("Something went wrong");
}*/
