/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 00:28:41 by thabeck-          #+#    #+#             */
/*   Updated: 2022/03/29 14:32:42 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;
	int	i;

	i = 0;
	array = NULL;
	range = max - min;
	if (range <= 0)
		return (array);
	array = malloc((range) * 4);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
