/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:16:37 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/15 15:51:14 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		alpha_char(char c);
int		numeric_char(char c);
int		lower_char(char c);
int		upper_char(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag_fst;

	i = 0;
	flag_fst = 0;
	while (str[i] != '\0')
	{
		if ((flag_fst == 0) && (lower_char(str[i]) == 1))
		{
			str[i] -= 32;
			flag_fst++;
		}
		else if ((flag_fst != 0) && (upper_char(str[i]) == 1))
			str[i] += 32;
		else if ((alpha_char(str[i]) == 0) && \
			(numeric_char(str[i]) == 0))
			flag_fst = 0;
		else
			flag_fst++;
		i++;
	}
	return (str);
}

int	alpha_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	numeric_char(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	lower_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	upper_char(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
