/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedhenri <pedhenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:37:13 by pedhenri          #+#    #+#             */
/*   Updated: 2021/04/07 14:31:00 by pedhenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char put)
{
	write(1, &put, 1);
}

void	ft_calculate(int number_a, int number_b)
{
	ft_putchar(number_a / 10 + '0');
	ft_putchar(number_a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(number_b / 10 + '0');
	ft_putchar(number_b % 10 + '0');
	if (number_a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int x[2];

	x[0] = 00;
	x[1] = 00;
	while (x[0] <= 98)
	{
		x[1] = x[0] + 1;
		while (x[1] <= 99)
		{
			ft_calculate(x[0], x[1]);
			x[1]++;
		}
		x[0]++;
	}
}
