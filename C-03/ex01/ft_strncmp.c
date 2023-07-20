/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:19:30 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/04 14:45:01 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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
	char	string[11] = "duckh\0unter";
	char	string2[11] = "duckisher";
	int		value;

	value = ft_strncmp(string, string2, 4);
	printf("We expect the answer to be the difference between the \n");
	printf("first non-matching character in the string from the table.");
    printf("\n The difference between %s and %s is:", string, string2);
	printf("%d \n", value);
}*/
