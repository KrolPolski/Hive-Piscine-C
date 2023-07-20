/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 06:53:57 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/20 10:44:42 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_sep_search(char *str, char *charset)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	if (charset[0] == '\0')
		return (str);
	size = ft_strlen(charset);
	while (str[i] != '\0')
	{
		while (str[i] != charset[j])
		{
			if (charset[j] != '\0')
				j++;
			if (charset[j] == '\0')
			{
				i++;
				j = 0;
			}
		}
		if (str[i] == charset[j])
			return (&str[i]);
	}
	return (NULL);
}

char	**ft_cleanup(char **results, char *str, int i, int j)
{
	int	k;

	k = 0;
	results[i] = malloc(ft_strlen(str) + 1);
	while (str[j - 1] != '\0')
		results[i][k++] = str[j++];
	if (results[i][0] != '\0')
	{
		i++;
	results[i] = malloc(10);
	results[i][0] = '\0';
	}
	return (results);
}

int	check_for_no_separators(char *sep_ptr, char **results, char *str)
{
	if (sep_ptr == NULL)
	{
		results[0] = str;
		return (1);
	}
	else
		return (0);
}	

char	**ft_split(char *str, char *charset)
{
	char	**results;
	int		i;
	char	*sep_ptr;
	int		j;
	int		k;

	results = malloc((ft_strlen(str) + 100) * sizeof(char));
	sep_ptr = ft_sep_search(str, charset);
	if (check_for_no_separators(sep_ptr, results, str))
		return (results);
	i = 0;
	j = 0;
	while (str[j] != '\0' && sep_ptr != NULL)
	{
		results[i] = malloc(sep_ptr - str + 100);
		k = 0;
		while (str[j] != '\0' && &str[j] != sep_ptr)
			results[i][k++] = str[j++];
		results[i][k] = '\0';
		if (results[i][0] != '\0')
			i++;
		if (str[++j] != '\0')
			sep_ptr = ft_sep_search(str + j, charset);
	}
	return (ft_cleanup(results, str, i, j));
}
/*
#include <stdio.h>

int	main(void)
{
	char	charset[] = "!,";
//	char	string[] = "                          ";
	char	string[] = "So long! and thanks for, all the fish";
	char	**results;

	results = ft_split(string, charset);
	printf("Our result is: '%s' Pointer: '%p' \n ", results[0], results[0]);
	printf("'%s' Pointer: '%p'\n ", results[1], results[1]);
	printf("'%s' Pointer: '%p'\n ", results[2], results[2]);
	printf("'%s' Pointer: '%p'\n ", results[3], results[3]);
//	printf("'%s' Pointer: '%p'\n ", results[4], results[4]);
//	printf("'%s' Pointer: '%p'\n ", results[5], results[5]);
	free(results[0]);
	free(results[1]);
	free(results[2]);
	free(results[3]);
	free(results);
}*/
