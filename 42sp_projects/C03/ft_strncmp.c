/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedhenri <pedhenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:35:38 by pedhenri          #+#    #+#             */
/*   Updated: 2021/04/15 17:30:30 by pedhenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while ((s1[aux] == s2[aux]) && (s1[aux] != '\0') && (s2[aux] != '\0'))
		aux++;
	if (aux < n)
		return ((unsigned char)s1[aux] - (unsigned char)s2[aux]);
	else
		return (0);
}
