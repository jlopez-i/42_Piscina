/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:21:50 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/10 17:09:17 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void ft_write_error(void);


int	ft_check_string2(char *str)
{
	int i;

	i = 0;
		  
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
			ft_write_error();	
		}
		else
		{
			if (str[i] != ' ')
			ft_write_error();
		}
	i++;
	}
	if (i != 31)
	{
		ft_write_error();
	}
	printf("Exito\n");
	return (1);
}
