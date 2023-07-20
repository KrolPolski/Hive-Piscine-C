/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_impossible.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:31:53 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/09 17:10:08 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_impossible_pairs(char *args1, char *args2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (args1[i] == '1' && args2[i] == '1')
			return (1);
		if (args1[i] == (n - 1) && args2[i] == (n - 1))
			return (1);
		if (args1[i] == (n + '0') && args2[i] == (n + '0'))
			return (1);
		i++;
	}
	return (0);
}

int	test_impossible(char **args, int n)
{
	if (test_impossible_pairs(args[0], args[1], n))
		return (1);
	if (test_impossible_pairs(args[2], args[3], n))
		return (1);
	return (0);
}
