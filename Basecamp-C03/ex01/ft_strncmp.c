/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:23 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/16 04:34:53 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (s1[i] && s2[i] && (n > 0) && (s1[i] == s2[i]))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	j = s1[i];
	k = s2[i];
	return (j - k);
}
