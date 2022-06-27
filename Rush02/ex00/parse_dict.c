/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsulzbac <lsulzbac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:22:19 by lsulzbac          #+#    #+#             */
/*   Updated: 2022/04/17 22:01:53 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	try_to_find(unsigned int keys[32], char names[32][100], char *to_find);

unsigned int	is_valid(unsigned int result)
{
	if ((result >= 0 && result <= 20)
		|| (result == 30) || (result == 40)
		|| (result == 50) || (result == 60)
		|| (result == 70) || (result == 80)
		|| (result == 90) || (result == 100)
		|| (result == 1000) || (result == 1000000)
		|| (result == 1000000000))
		return (result);
	else
		return (-1);
}

unsigned int	find_key(int *ptr_i, char *str)
{
	int				initial;
	int				final;
	unsigned int	result;

	result = 0;
	initial = *ptr_i;
	while (*(str + *ptr_i) >= '0' && *(str + *ptr_i) <= '9')
	{
		final = *ptr_i;
		*ptr_i = *ptr_i + 1;
	}
	while (initial <= final && (final - initial <= 10))
	{
		result = result * 10 + (str[initial] - '0');
		initial++;
	}
	if (final - initial > 10)
		result = -1;
	return (is_valid(result));
}

void	fill_values(char l[100], char *str, int i, int f)
{
	int	k;

	k = 0;
	while (i <= f)
	{
		l[k] = str[i];
		i++;
		k++;
	}
	l[k] = '\0';
}

void	find_values(int *ptr_i, int *ptr_j, char names[32][100], char *str)
{
	int	initial;
	int	final;

	while (*(str + *ptr_i) != '\n' && *(str + *ptr_i) != '\0')
	{
		if (*(str + *ptr_i) > 32 && *(str + *ptr_i) != ':')
		{
			initial = *ptr_i;
			while (*(str + *ptr_i) > 32 && *(str + *ptr_i) != '\n'
				&& *(str + *ptr_i) != '\0')
			{
				final = *ptr_i;
				*ptr_i = *ptr_i + 1;
			}
			fill_values(names[*ptr_j], str, initial, final);
			*ptr_j = *ptr_j + 1;
			break ;
		}
		*ptr_i = *ptr_i + 1;
	}
}

void	parse_dict(char *str, char *str_to_find)
{
	int					i;
	int					result;
	unsigned int		keys [32];
	char				names[32][100];
	int					j;

	i = 0;
	j = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= '0' && *(str + i) <= '9')
		{
			result = find_key(&i, str);
			if (result >= 0 && j < 32)
			{
				keys[j] = result;
				find_values(&i, &j, names, str);
			}
		}
		i++;
	}
	if (j == 32)
		try_to_find(keys, names, str_to_find);
	else
		write (1, "Dict Error\n", 11);
}
