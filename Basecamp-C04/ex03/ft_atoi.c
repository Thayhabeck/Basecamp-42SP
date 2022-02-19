/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:52:11 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/17 14:55:49 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_isspace(char chr)
{
	if ((chr >= 9 && chr <= 13) || chr == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;
	int	i;

	i = 0;
	nbr = 0;
	sign = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if ((sign % 2))
		nbr *= (-1);
	return (nbr);
}
