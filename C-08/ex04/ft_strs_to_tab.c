/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:22:46 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/13 13:03:47 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dest;

	length = ft_strlen(src);
	dest = malloc(length + 1);
	ft_strcpy(dest, src);
	return (dest);
}

t_stock_str	*create_struct(void)
{
	t_stock_str	s_str;
	t_stock_str	*ptr;

	ptr = &s_str;
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_array;
	int			i;

	s_array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (s_array == NULL)
		return (s_array);
	i = 0;
	while (i < ac)
	{
		s_array[i] = *create_struct();
		s_array[i].size = ft_strlen(av[i]);
		s_array[i].str = av[i];
		s_array[i].copy = ft_strdup(av[i]);
		i++;
	}
		s_array[i].str = 0;
	return (s_array);
}

/*int	main(void)
{
	char		**strings_array;
	char		str1[] = "Hello";
	char		str2[] = "World";
	char		str3[] = "Hei";
	char		str4[] = "Maailma";
	t_stock_str	*results;
	int			i;

	strings_array = malloc(32);
	if (strings_array == NULL)
		return (-1);
	strings_array[0] = str1;
	strings_array[1] = str2;
	strings_array[2] = str3;
	strings_array[3] = str4;
	results = ft_strs_to_tab(4, strings_array);
	i = 0;
	printf("The values of each struct instance are as follows: \n");
	while (i < 4)
	{
		printf("%d: \n", i);
		printf("Size: '%d', str:'%s', copy: '%s' \n", 
		results[i].size, results[i].str, results[i].copy);
		i++;
	}
	free(results[0].copy);
	free(results[1].copy);
	free(results[2].copy);
	free(results[3].copy);
	free(results);
	free(strings_array);
	return (0);
}*/
