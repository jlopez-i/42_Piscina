/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_dict_to_buff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:06:15 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 21:59:24 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	copy_dict_to_buf(char *buf, char *file_name, int size)
{
	int		f;
	ssize_t	nr_bytes;

	f = open(file_name, O_RDONLY);
	if (f > 0)
	{
		nr_bytes = read(f, buf, size);
	}
	else
	{
		write(1, "Dict Error\n", 11);
	}
	close(f);
}
