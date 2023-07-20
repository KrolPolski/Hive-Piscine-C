/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:32:17 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/12 18:35:02 by rboudwin         ###   ########.fr       */
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
/*#include <stdio.h>

int	main(void)
{
	char	source[] = "I think, therefore I am";
	char	*dest = ft_strdup(source);

	printf("The source was '%s'. We expect the destination \n", source);
	printf("to be the same now: '%s'. If not something went wrong", dest);
	free (dest);
}*/
