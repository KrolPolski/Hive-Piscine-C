/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:31:54 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/05 13:14:01 by rboudwin         ###   ########.fr       */
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

/*int	main(void)
{
	char	string[] = "Fish";
	int		length;

	length = ft_strlen(string);
	printf("%s is %d characters long.\n", string, length);
}*/
