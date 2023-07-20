/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:43:44 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/12 19:30:31 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	char	c;
	char	count;

	c = *str;
	count = 0;
	while (c != 0)
	{
		count++;
		str++;
		c = *str;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
		dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		necessary_space;
	char	*new_string;

	if (size == 0)
	{
		new_string = malloc(0);
		return (new_string);
	}
	i = -1;
	while (++i < size)
		necessary_space = necessary_space + ft_strlen(strs[i]);
	necessary_space += (ft_strlen(sep) * (size - 1));
	new_string = malloc((necessary_space + 1) * sizeof(char));
	if (new_string == NULL)
		return (new_string);
	i = -1;
	while (++i < size)
	{
		new_string = ft_strcat(new_string, strs[i]);
		if (i + 1 < size)
			new_string = ft_strcat(new_string, sep);
	}
	return (new_string);
}
/*
int	main(void)
{
	int		size;
	char	**strs;
	char	*sep;
	char	*result;
	char	separator[] = ",";

	sep = separator;
	size = 4;
	strs = malloc(size * 10);
	//result = ft_strjoin(0, strs, sep);
	//printf("Lets make sure this returns blank: '%s'\n", result);
	strs[0] = "So long";
	strs[1] = " and thanks";
	strs[2] = " for all";
	strs[3] = " the fish";
	result = ft_strjoin(size, strs, sep);
	printf("We had four strings: '%s'\n", strs[0]);
	printf("'%s' \n", strs[1]);
	printf("'%s' \n", strs[2]);
	printf("'%s' \n", strs[3]);
	printf("Our result was '%s' \n", result);
	free(result);
	free (strs);
}*/
