/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:52:06 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 09:56:56 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
			if (str[i] < 97 || str[i] > 122)
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
	char	string1[] = "123456789";
	char	string2[] = "Number";
	char	string3[] = "alllowercase";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	int		result;

	ptr1 = &string1[0];
	ptr2 = &string2[0];
	ptr3 = &string3[0];
	result = ft_str_is_lowercase(ptr1);
	printf("%d \n", result);
	result = ft_str_is_lowercase(ptr2);
	printf("%d \n", result);
	result = ft_str_is_lowercase(ptr3);
	printf("%d \n", result);
}*/
