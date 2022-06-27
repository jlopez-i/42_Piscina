/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:08:18 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/18 21:15:14 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		str[i] = str[i] + 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] >= 32 && str[i - 1] <= 47))
		{
		str[i] = str[i] - 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z' && str[i] == str[0])
		{
		str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
