/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:42:55 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/15 16:26:03 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			count++;
		i++;
	}
	if (count == i)
		return (1);
	return (0);
}
