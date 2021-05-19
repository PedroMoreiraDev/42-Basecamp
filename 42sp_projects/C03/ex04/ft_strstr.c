/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedhenri <pedhenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:06:10 by pedhenri          #+#    #+#             */
/*   Updated: 2021/04/15 17:31:30 by pedhenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int c;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (to_find[c] != '\0')
		{
			if (str[i + c] == to_find[c])
			{
				c++;
			}
			else
				break ;
		}
		if (to_find[c] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
