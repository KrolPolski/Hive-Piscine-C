/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:43:25 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/04 13:40:11 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	char	string[6] = "ducky";
	char	string2[5] = "duck";
	int		value;

	value = ft_strcmp(string, string2);
	printf("We expect the answer to be the difference between the \n");
	printf("first non-matching character in the string from the table.");
    printf("\n The difference between %s and %s is:", string, string2);
	printf("%d \n", value);
}*/
