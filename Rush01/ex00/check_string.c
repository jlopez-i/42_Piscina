/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:42:28 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/10 17:29:34 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int check_string(char *str)
	{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{	
			if (str[i] < '1' || str[i] > '4')
				write (1, "Error: unvalid number\n", 22);
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				write (1, "Error: space needed\n", 20);
				return (0);
		}
	i++;
	}
	if (i != 31)
	{
		write (1, "Error: unvalid string\n", 22);
		return (0);
	}
   	else
	return (1);
}
