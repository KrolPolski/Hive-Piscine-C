/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:16:23 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 10:19:00 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
			if (str[i] < 65 || str[i] > 90)
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
	char	string1[] = "ALLUPPERCASE";
	char	string2[] = "3452";
	char	string3[] = "alllowercase";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	int		result;

	ptr1 = &string1[0];
	ptr2 = &string2[0];
	ptr3 = &string3[0];
	result = ft_str_is_uppercase(ptr1);
	printf("%d \n", result);
	result = ft_str_is_uppercase(ptr2);
	printf("%d \n", result);
	result = ft_str_is_uppercase(ptr3);
	printf("%d \n", result);
}*/
