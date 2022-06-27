/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:18:30 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/18 21:14:14 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
