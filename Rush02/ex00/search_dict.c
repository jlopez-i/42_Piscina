/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:07:37 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:47:45 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_dict(unsigned int k[32], char n[32][100], unsigned int num)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (num == 0)
		return ;
	while (i < 32)
	{
		if (num == k[i])
		{
			while (n[i][j] != '\0')
			{
				write(1, &n[i][j], 1);
				j++;
			}
			write(1, " ", 1);
			break ;
		}
		i++;
	}
}
