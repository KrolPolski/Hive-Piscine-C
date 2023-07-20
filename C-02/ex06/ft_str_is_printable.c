/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:20:48 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 13:48:05 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
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
			if (str[i] < 32 || str[i] > 126)
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

/*int	main(void)
{
	char	string1[] = "\x01ALLUPPERCASE";
	char	string2[] = "34 52";
	char	string3[] = "alllowercase";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	int		result;

	ptr1 = &string1[0];
	ptr2 = &string2[0];
	ptr3 = &string3[0];
	printf("%s \n", string1);
	result = ft_str_is_printable(ptr1);
	printf("%d \n", result);
	result = ft_str_is_printable(ptr2);
	printf("%d \n", result);
	result = ft_str_is_printable(ptr3);
	printf("%d \n", result);
}*/
