/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_to_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:18:26 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 22:02:37 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	p_three(unsigned int k[32], char n[32][100], char *t, int l);

int	ft_count_letters(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

void	print_zero(unsigned int k[32], char n[32][100])
{
	unsigned int	zero;
	int				i;
	int				j;

	zero = 0;
	i = 0;
	j = 0;
	while (i < 32)
	{
		if (zero == k[i])
		{
			while (n[i][j] != '\0')
			{
				write(1, &n[i][j], 1);
				j++;
			}
			write (1, " ", 1);
			break ;
		}
		i++;
	}
}

void	try_to_find(unsigned int keys[32], char names[32][100], char *to_find)
{
	int				i;
	int				len;

	i = 0;
	len = ft_count_letters(to_find);
	if (len == 1 && *to_find == '0')
		print_zero(keys, names);
	if (len != 0)
		p_three(keys, names, to_find, len);
	if (len == 0)
		write (1, "\n", 1);
}
