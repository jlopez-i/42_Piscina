/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:15:39 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/10 17:29:36 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int check_string(char *str);
void ft_map (void);

int	main(int argc, char **argv)	
{
	int input;

	if (argc !=2)
	{
		write (1, "Error argc\n", 11);
		return (0);							
	}
	else
	{		
		input = check_string(argv[1]);  
	}		
	if (input == 0)
	{
		write (1, "Error: no input\n", 16);
		return (0);
	}
	else 
	{
	  ft_map();
	  return(0);
	}
}
