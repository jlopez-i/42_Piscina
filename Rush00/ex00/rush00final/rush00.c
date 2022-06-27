/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjociles <sjociles@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:43:02 by sjociles          #+#    #+#             */
/*   Updated: 2022/04/05 11:52:41 by sjociles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && r == 1) || (c == x && r == y)
				ft_putchar('o');
			else if ((c == x && r == 1) || (c == 1 && r == y))
				ft_putchar('o');
			else if ((c == 1) || (c == x))
				ft_putchar('|');
			else if ((r == 1) || (r == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
