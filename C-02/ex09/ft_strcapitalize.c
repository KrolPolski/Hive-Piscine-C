/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:58:50 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/03 21:35:36 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	upcase(char *str, int i)
{
	if (str[i] > 96 && str[i] < 123)
	{
		str[i] = str[i] - 32;
	}
}

int	am_i_a_word_separator(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 91 && c < 97) || c > 122)
	{
		return (1);
	}	
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_separator;
	int	last_word_separator;

	i = 0;
	while (str[i] != '\0')
	{
		word_separator = am_i_a_word_separator(str[i]);
		last_word_separator = am_i_a_word_separator(str[i - 1]);
		if (word_separator == 1)
			i++;
		else if ((last_word_separator == 1) && (str[i] > 97 && str[i] < 123))
		{
			upcase(str, i);
			i++;
		}
		else if (last_word_separator == 0 && (str[i] > 64 && str[i] < 91))
		{
			str[i] = str[i] + 32;
			i++;
		}	
		else
			i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string1[] = "salut, comment tu vas ? 42mots 
	quarante-deux; cinquante+et+un";
	char	string2[] = "some uncapitalized sentence";
	char	string3[] = "SOME CAPITALIZED SENTENCE";
	char	garbage[] = "%$#@@ 1%@## cAp@#$# OSO@";

	printf("%s \n", string1);
	ft_strcapitalize(string1);
	printf("%s \n", string1);
	printf("%s \n", string2);
	ft_strcapitalize(string2);
	printf("%s \n", string2);
	printf("%s \n", string3);
	ft_strcapitalize(string3);
	printf("%s \n", string3);
	printf("%s \n", garbage);
	ft_strcapitalize(garbage);
	printf("%s \n", garbage);
}*/	
