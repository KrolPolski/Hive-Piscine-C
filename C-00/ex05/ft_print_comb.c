/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:39:08 by rboudwin          #+#    #+#             */
/*   Updated: 2023/06/29 13:57:32 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_all_digits(void)
{
	int	number;
	int ascii_number;
	number = 0;
	ascii_number = 48;
	while (number < 10)
	{
		ft_putchar(ascii_number);
		number++;
		ascii_number++;
	}
}

void	ft_increment_third_digit(char digit1, char digit2, char digit3, int times)
{
	int k;
   	k = 0;
	while (k <= times)
			{
				ft_putchar(digit1);
				ft_putchar(digit2);
				ft_putchar(digit3);
				ft_putchar(',');
				ft_putchar(' ');
				digit3++;
				k++;
			}
}


void	ft_increment_second_digit(char digit1, char digit2, char digit3, int times)
{
	int j;
    j = 0;
	
	while (j <= times)
		{
			ft_increment_third_digit(digit1, digit2, digit3, times);
			times--;
			j++;
			digit2++;
			digit3++;
		}
			ft_increment_third_digit(digit1, digit2, digit3, times);
		digit1++;
		ft_putchar(digit1);
		ft_putchar(digit2);
		ft_putchar(digit3);
}


void	ft_print_comb(void)
{
	char digit1;
	char digit2;
	char digit3;
	int modtimes;

	digit1 = '0';
	digit2 = '1';
	digit3 = '2';
	modtimes = 7;
	int i;
	i = 0;
	int j;
	j = 0;
	while (i <= 7)
	{
		ft_increment_second_digit(digit1, digit2, digit3, modtimes);
		digit1++;
		modtimes--;
		i++;

	}	
	


}


int	main(void)
{
	ft_print_comb();
}


