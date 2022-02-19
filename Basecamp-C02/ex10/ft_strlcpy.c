/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:17:08 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/15 15:52:16 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = ft_strlen(src);
	if (size != 0)
	{
		while (src[count] && count < (size - 1))
		{
			dest[count] = src[count];
			count++;
		}	
		dest[count] = '\0';
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
