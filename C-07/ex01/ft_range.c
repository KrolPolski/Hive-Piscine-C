/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:55:21 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/12 18:35:48 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)

{
	int		*range;
	int		i;
	long	total_indexes;

	total_indexes = 0;
	if (min >= max)
		return (NULL);
	else
	{
		total_indexes = ((long)max) - ((long)min);
		range = malloc(((total_indexes) * 4));
	}
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;
	int	max;
	int	min;

	i = 1;
	min = 1;
	max = 10;

	range = ft_range(min, max);
	printf("The range is %d", range[0]);
	while (i < ((long)max - min))
	{
		printf(" %d", range[i]);
		i++;
	}
	free(range);
}*/
