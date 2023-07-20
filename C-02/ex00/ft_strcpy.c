/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:00:41 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 19:38:40 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

/*int main(void)
{
	char	string[5] = "fish";
	char	deststring[11] = "duckhunter";
	printf("source str was %s dest str was %s.", string, deststring);
	ft_strcpy(deststring, string);
	printf("The destination string is now %s \n", deststring);
}*/
