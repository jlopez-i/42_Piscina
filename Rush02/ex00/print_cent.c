/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:28:30 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:00:36 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_cent(unsigned int keys[32], char names[32][100], char *to_find)
{
	unsigned int	num;
	int				i;
	int				j;

	i = 0;
	j = 0;
	num = to_find[0] - '0';
	if (num == 0)
		return ;
	while (i < 32)
	{
		if (num == keys[i])
		{
			while (names[i][j] != '\0')
			{
				write(1, &names[i][j], 1);
				j++;
			}
			write(1, " ", 1);
			break ;
		}
		i++;
	}
	write (1, "hundred ", 8);
}
