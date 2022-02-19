/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_rowcol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzilio <lzilio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:03:47 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/14 02:31:19 by lzilio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	basic_atoi(char *str, int arr[16]);

void	extract_rowcol(char *str, int views[4][4])
{
	int	i;
	int	j;
	int	k;
	int	arr[16];

	k = 0;
	i = 0;
	j = 0;
	basic_atoi(str, arr);
	while (j < 4)
	{
		k = 0;
		while (k < 4)
		{
			views[j][k] = arr[i++];
			k++;
		}
		j++;
	}
	return ;
}

void	basic_atoi(char *str, int arr[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] != ' ')
		{
			arr[i++] = str[j] - '0';
		}
		j++;
	}
}
