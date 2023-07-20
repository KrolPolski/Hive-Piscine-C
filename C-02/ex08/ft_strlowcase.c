/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:58:50 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 11:15:49 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	string1[] = "SoMeCaPiTaLs";
	char	string2[] = "ALLCAPS";
	char	string3[] = "alllowercase";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;

	ptr1 = &string1[0];
	ptr2 = &string2[0];
	ptr3 = &string3[0];
	printf("%s \n", string1);
	ft_strlowcase(ptr1);
	printf("%s \n", string1);
	printf("%s \n", string2);
	ft_strlowcase(ptr2);
	printf("%s \n", string2);
	printf("%s \n", string3);
	ft_strlowcase(ptr3);
	printf("%s \n", string3);
}*/
