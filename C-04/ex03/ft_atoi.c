/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:38:12 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/07 18:32:46 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_to_int(char *str, int accumulator)
{
	int	i;

	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	str = str + i;
	if (!str || !*str || !(*str > 47 && *str < 58))
		return (accumulator);
	else
		return (ft_str_to_int(str + 1, accumulator * 10 + (*str - '0')));
}

int	is_it_negative(char *str)
{
	int	i;
	int	negatives;

	i = 0;
	negatives = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			negatives++;
			i++;
		}
	}
	return (negatives % 2);
}

char	*trim_whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
			i++;
		else
			return (str + i);
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int		result;
	int		accumulator;
	char	*cleanstring;
	int		am_i_negative;

	cleanstring = trim_whitespace(str);
	accumulator = 0;
	am_i_negative = is_it_negative(cleanstring);
	result = ft_str_to_int(cleanstring, accumulator);
	if (am_i_negative == 1)
		result = -result;
	return (result);
}
/*
int	main(void)
{
int result;
	//	char	string[] = "        +++---42iw13";
//	char	example[] = " ---+--+1234ab567";

//	printf("%s, %d \n", string, result);
//	result = ft_atoi(example);
//	printf("%s, %d \n", example, result);

char	str[] = "    ---+--+1234ab567";
char	str1[] = "--2147483647fds";
char	str2[] = "  +++---2147483648fad";
char	str3[] = "   \v   ---+--0adf345";
char	str4[] = "";
char	str5[] = " \f   -++++++1a342";
char	str6[] = "\t\t ---+-1adf342324";
char	str7[] = "  \n ++--043758asdf";

	result = ft_atoi(str);
	printf("%s, %d \n", str, result);
	
	result = ft_atoi(str1);
	printf("%s, %d \n", str1, result);
	
	result = ft_atoi(str2);
	printf("%s, %d \n", str2, result);
	
	result = ft_atoi(str3);
	printf("%s, %d \n", str3, result);
	
	result = ft_atoi(str4);
	printf("%s, %d \n", str4, result);
	
	result = ft_atoi(str5);
	printf("%s, %d \n", str5, result);
	
	result = ft_atoi(str6);
	printf("%s, %d \n", str6, result);
	
	result = ft_atoi(str7);
	printf("%s, %d \n", str7, result);
}*/
