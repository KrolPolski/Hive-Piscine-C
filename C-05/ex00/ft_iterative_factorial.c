/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:54:37 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 17:54:19 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	final_result;
	int	running_total;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	running_total = nb;
	while (i > 1)
	{
		i--;
		running_total = running_total * i;
	}
	final_result = running_total;
	return (final_result);
}

/*int	main(void)
{
	int	result;

	result = ft_iterative_factorial(4);
	printf("%d \n", result);
	result = ft_iterative_factorial(10);
	printf("%d \n", result);
	result = ft_iterative_factorial(0);
	printf("%d \n", result);
	result = ft_iterative_factorial(-42);
	printf("%d \n", result);
	
}*/
