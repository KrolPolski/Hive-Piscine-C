/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:58:32 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/05 11:52:07 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

char	*ft_do_search(char *str, char *to_find, int i, int j)
{
	int	results;
	int	size;

	size = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		if (str[i] != to_find[j])
			i++;
		else if (str[i] == to_find[j])
		{
			results = ft_strncmp(&str[i], to_find, size);
			if (results == 0)
				return (&str[i]);
			else
				i++;
		}
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	return (ft_do_search(str, to_find, i, j));
}

/*int	main(void)
{
	char	haystack[] = "So long and thanks for all the fish!";
	char	needle[] = "and";
	char	*result;

	result = ft_strstr(haystack, needle);
	printf("Haystack is: '%s' \n", haystack);
	printf("Needle is: '%s' \n", needle);
	printf("If this worked the beginning of the following strings");
	printf("should match:\n");
	printf("'%s'    '%s'", needle, result);
	printf("%p was the value returned by ft_strstr ", result);
	printf("(which should be null if it wasn't found)");
}*/
