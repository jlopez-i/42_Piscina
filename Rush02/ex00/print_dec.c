/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:47:32 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:16:52 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_dict(unsigned int k[32], char n[32][100], unsigned int num);

void	print_one(unsigned int keys[32], char names[32][100], char *to_find)
{
	unsigned int	num;
	int				i;
	int				j;

	i = 0;
	j = 0;
	num = to_find[1] - '0' + 10;
	search_dict(keys, names, num);
}

int	print_dec(unsigned int keys[32], char names[32][100], char *to_find)
{
	unsigned int	num;

	num = to_find[0] - '0';
	if (num == 0)
		return (1);
	else if (num == 1)
	{
		print_one(keys, names, to_find);
		return (2);
	}
	else
	{
		num *= 10;
		search_dict(keys, names, num);
		return (1);
	}
}
