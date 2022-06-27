/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_three_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:37:14 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:35:12 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	try_to_find(unsigned int keys[32], char names[32][100], char *to_find);
void	print_block(unsigned int keys[32], char n[32][100], int b, char *f);
void	print_cent(unsigned int keys[32], char names[32][100], char *to_find);
int		print_dec(unsigned int keys[32], char names[32][100], char *to_find);
void	print_uni(unsigned int keys[32], char names[32][100], char *to_find);

void	p_three(unsigned int k[32], char n[32][100], char *find, int l)
{
	int	block;
	int	d;

	block = (l - 1) / 3;
	if ((l - 1) % 3 == 2)
	{
		print_cent(k, n, find);
		l--;
		find++;
	}
	if ((l - 1) % 3 == 1)
	{
		d = print_dec(k, n, find);
		l -= d;
		find += d;
	}
	if ((l - 1) % 3 == 0 && d != 2)
	{
		print_uni(k, n, find);
		l--;
		find++;
	}
	print_block(k, n, block, find);
	try_to_find(k, n, find);
}
