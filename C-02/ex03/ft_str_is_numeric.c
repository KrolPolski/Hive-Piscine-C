/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:43:22 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 09:50:05 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
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
			if (str[i] < 48 || str[i] > 57)
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
	char	string2[] = "3Number3";
	char	string3[] = "";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	int		result;

	ptr1 = &string1[0];
	ptr2 = &string2[0];
	ptr3 = &string3[0];
	result = ft_str_is_numeric(ptr1);
	printf("%d \n", result);
	result = ft_str_is_numeric(ptr2);
	printf("%d \n", result);
	result = ft_str_is_numeric(ptr3);
	printf("%d \n", result);
}*/
