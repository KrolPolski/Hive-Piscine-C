/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:39:17 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 09:37:43 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 65 || (str[i] > 91 && str[i] < 97) || str[i] > 122)
			{
				return (0);
			}
			else
			{
				i++;
			}
		}
		return (1);
	}
}
/*
int	main(void)
{
	char	string1[] = "OnlyAlpha";
	char	string2[] = "HasaNumber3";
	char	string3[] = "HasA$pecial";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	int		result;

	ptr1 = &string1[0];
	ptr2 = &string2[0];
	ptr3 = &string3[0];
	result = ft_str_is_alpha(ptr1);
	printf("%d \n", result);
	result = ft_str_is_alpha(ptr2);
	printf("%d \n", result);
	result = ft_str_is_alpha(ptr3);
	printf("%d \n", result);
}*/
