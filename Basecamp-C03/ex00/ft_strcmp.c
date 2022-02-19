/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:44:03 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/16 04:33:58 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	k = s2[i];
	j = s1[i];
	return (j - k);
}
