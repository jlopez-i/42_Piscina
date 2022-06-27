/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   byte_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:04:10 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:59:07 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	byte_size(char *file_name)
{
	int		i;
	int		f;
	ssize_t	nr_bytes;
	char	buf[1];

	i = 0;
	f = open(file_name, O_RDONLY);
	if (f > 0)
	{
		nr_bytes = 1;
		while (nr_bytes != 0)
		{
			i++;
			nr_bytes = read(f, buf, 1);
		}
		close(f);
	}
	else
	{
		write(1, "Dict Error\n", 11);
	}
	return (i);
}
