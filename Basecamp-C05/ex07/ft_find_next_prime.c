/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:54:11 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/18 02:20:27 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = nb / i;
	if (nb < 2)
		return (0);
	while (i <= j)
	{
		if (nb % i == 0)
			return (0);
		i++;
		j = nb / i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
