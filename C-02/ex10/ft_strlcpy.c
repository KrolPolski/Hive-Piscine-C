/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:09:30 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/04 09:18:35 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	length = ft_strlen(src);
	return (length);
}

/*int	main(void)
{
	char	string[7] = "fisher";
	char	deststring[11] = "duckhunter";
	char	*src;
	char	*dest;
	unsigned int	a;

	dest = &deststring[0];
	src = &string[0];
	printf("source str was %s dest str was %s.", string, deststring);
	a = ft_strlcpy(dest, src, 5);
	printf("The destination string is now %s \n", deststring);
	printf("%d \n", a);
}*/
