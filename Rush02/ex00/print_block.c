/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_block.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:38:09 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:38:31 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_dict(unsigned int k[32], char n[32][100], unsigned int num);

void	print_block(unsigned int k[32], char n[32][100], int block, char *find)
{
	unsigned int	num;

	num = 0;
	if (block == 1)
		num = 1000;
	else if (block == 2)
		num = 1000000;
	else if (block == 3)
		num = 1000000000;
	if (*(find - 1) == '0' && *(find - 2) == '0'
		&& *(find - 3) == '0')
		return ;
	else if (num != 0)
		search_dict(k, n, num);
}
