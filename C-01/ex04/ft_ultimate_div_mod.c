/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:15:39 by rboudwin          #+#    #+#             */
/*   Updated: 2023/06/30 11:29:58 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division_result;
	int	modulus_result;

	division_result = *a / *b;
	modulus_result = *a % *b;
	*a = division_result;
	*b = modulus_result;
}
