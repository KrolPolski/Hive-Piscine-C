/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:55:04 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/05 12:36:18 by rboudwin         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	init_length_dest;
	unsigned int	init_length_src;

	init_length_dest = ft_strlen(dest);
	init_length_src = ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (init_length_dest + init_length_src);
}

/*int	main(void)
{
	char			src_string[] = " sticks";
	char			dest_string[13] = "fish";
	char			dest2_string[13] = "fish";
	unsigned int	final_length;

	printf("Src was %s \n and the dest was %s \n", src_string, dest_string);
	final_length = ft_strlcat(dest_string, src_string, 5);
	printf("Dest string is now %s \n", dest_string);
	printf("My command returned: %u \n", final_length);
}*/
