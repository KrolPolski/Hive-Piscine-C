/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:11:06 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/09 17:55:19 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int	result;

	result = ft_recursive_factorial(4);
	printf("4! = %d \n", result);
	result = ft_recursive_factorial(10);
	printf("10! = %d \n", result);
	result = ft_recursive_factorial(12);
	printf("12! = %d \n", result);
	result = ft_recursive_factorial(-42);
	printf("-42 = %d \n", result);
}*/
