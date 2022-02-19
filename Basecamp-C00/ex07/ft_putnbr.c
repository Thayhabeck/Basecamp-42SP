/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 04:16:04 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/18 22:42:02 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_base(int nbr)
{
	int	base;

	base = 1;
	while (nbr > 9 || nbr < -9)
	{
		base = base * 10;
		nbr = nbr / 10;
	}
	return (base);
}

void	ft_putnbr(int nb)
{
	int		nbr;
	int		base;
	char	out_nbr;

	nbr = nb;
	base = ft_count_base(nbr);
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb / base;
		nbr *= (-1);
		out_nbr = nbr + '0';
		write(1, &out_nbr, 1);
		nb = nb % base;
		nb *= (-1);
		base = base / 10;
	}
	while (base >= 1)
	{
		nbr = nb / base;
		out_nbr = nbr + '0';
		write(1, &out_nbr, 1);
		nb = nb % base;
		base = base / 10;
	}
}
