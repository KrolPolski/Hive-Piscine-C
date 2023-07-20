/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:21:39 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/12 19:25:34 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)

{
	int		*range;
	int		i;
	long	total_indexes;

	total_indexes = 0;
	if ((((long)min) >= ((long)max)))
		return (NULL);
	else
	{
		total_indexes = ((long)max) - ((long)min);
		range = malloc(total_indexes * sizeof(int));
		if (range == NULL)
			return (range);
	}
	i = 0;
	while (i < (((long)max) - ((long)min)))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (max <= min)
	{
		range[0] = NULL;
		return (0);
	}
	else
	{
		range[0] = ft_range(min, max);
		if (range[0] == NULL)
			return (-1);
		size = ((long)max - ((long)min));
		return (size);
	}
}
/*
int	main(void)
{
	int		**range;
	int		min;
	int		max;
	int		size;
	long	total_indexes;
	int		i;

	min = -2147483648;
	max = -1;
	//min = -5;
	//max = 0;
	i = 1;
	total_indexes = ((long)max - ((long)min));
	range = malloc(10);
	size = ft_ultimate_range(range, min, max);
	printf("Min: %d, Max: %d, Size: %d \n", min, max, size);
	printf("The range is %d", range[0][0]);
	while (i < 5)
	{
		printf(" %d", range[0][i]);
		i++;
	}
	free(range[0]);
	free(range);
}*/
