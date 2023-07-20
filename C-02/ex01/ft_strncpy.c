/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:16:53 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 19:40:46 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	srcstring[7] = "fisher";
	char	deststring[11] = "duckhunter";
	printf("source str was %s dest str was %s.", srcstring, deststring);
	ft_strncpy(deststring, srcstring, 7);
	printf("The destination string is now %s \n", deststring);
//	printf("%c \n", deststring[8]);
}*/
