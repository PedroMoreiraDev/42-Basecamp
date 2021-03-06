/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedhenri <pedhenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:32:29 by pedhenri          #+#    #+#             */
/*   Updated: 2021/04/15 02:12:57 by pedhenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int c;
	int diff;

	c = 0;
	i = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		c++;
		i++;
	}
	i = 0;
	while (i <= c)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
