/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedhenri <pedhenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:33:30 by pedhenri          #+#    #+#             */
/*   Updated: 2021/04/08 18:01:38 by pedhenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change(int *str, int i)
{
	int aux_tab;

	aux_tab = str[i];
	str[i] = str[i + 1];
	str[i + 1] = aux_tab;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (count != 0)
	{
		count = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				change(tab, i);
				i++;
				count++;
			}
			else
			{
				i++;
			}
		}
		i = 0;
	}
}
