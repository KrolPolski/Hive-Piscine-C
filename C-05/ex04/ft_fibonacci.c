/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:17:14 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/08 18:40:50 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
	{
		result = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		return (result);
	}
}

/*int	main(void)
{
	int	result;

	result = ft_fibonacci(10);
	printf("%d", result);
}*/
