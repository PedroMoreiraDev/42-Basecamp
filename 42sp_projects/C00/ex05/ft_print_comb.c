/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedhenri <pedhenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:16:22 by pedhenri          #+#    #+#             */
/*   Updated: 2021/04/07 14:26:36 by pedhenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char number_a;
	char number_b;
	char number_c;

	number_a = '0';
	while (number_a <= '7')
	{
		number_b = number_a + 1;
		while (number_b <= '8')
		{
			number_c = number_b + 1;
			while (number_c <= '9')
			{
				ft_putchar(number_a, number_b, number_c);
				number_c++;
			}
			number_b++;
		}
		number_a++;
	}
}
