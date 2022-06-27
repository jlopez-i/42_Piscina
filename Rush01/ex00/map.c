/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:26:37 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/10 17:29:39 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void ft_map (int **map)
{
	int	i;
	int x;
	int y;

map = (int**) malloc (4 * sizeof (int*));

	i = 0;
	
	while (i < 4)
	{
	map [i] = (int*) malloc (4 * sizeof (int));
	i++;
	}
	y = 0;
	while (y < 4)
	{	
		x = 0;
		while (x < 4)
		{
			map[x][y] = 0;
		x++;
		}
	y++;
	}
}
