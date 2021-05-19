/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedhenri <pedhenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 00:23:51 by pedhenri          #+#    #+#             */
/*   Updated: 2021/04/17 00:24:17 by pedhenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int c;
	int d;

	c = argc - 1;
	d = 0;
	if (argc > 0)
	{
		while (c > 0)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}
