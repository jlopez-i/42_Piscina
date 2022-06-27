/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:15:39 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/10 15:24:12 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int ft_check_string2(char *str);
void ft_write_error(void);

// void ft_map (int **map);

int	main(int argc, char **argv)	
{
//	int	*arr;
	int input;
//	int j;

//	*arr = 0;			
	if (argc != 2)	
	{
		ft_write_error();
		return(0);	
	}

	else
	{		
		input = ft_check_string2(argv[1]);  
	}		
	if (input == 0)
	{
		ft_write_error();
		return(0);
	}
	else 
	{
/*		j = 0;
		while (argv[1][j] != '\0')
		{
		   	arr[j] = argv[1][j] - '0';
		j++;
		}
*/   }
}
