/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uni.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:49:03 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:16:10 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_dict(unsigned int k[32], char n[32][100], unsigned int num);

void	print_uni(unsigned int keys[32], char names[32][100], char *to_find)
{
	unsigned int	num;
	int				i;
	int				j;

	i = 0;
	j = 0;
	num = to_find[0] - '0';
	if (num == 0)
		return ;
	search_dict(keys, names, num);
}
