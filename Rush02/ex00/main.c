/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:50:23 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/04/17 22:00:47 by lsulzbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int		ft_check_string(char *str);
void	init_prog(int argc, char **argv);
int		byte_size(char *file_name);
void	copy_dict_to_buf(char *buf, char *file_name, int size);
void	parse_dict(char *str, char *to_find);

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		write (1, "Error\n", 6);
	else if (ft_check_string(argv[argc - 1]))
		init_prog(argc, argv);
	else
		write (1, "Error\n", 6);
	return (1);
}

void	init_prog(int argc, char **argv)
{
	int		size_file;
	char	*buf;
	char	*dict_name;

	if (argc == 2)
		dict_name = "numbers.dict";
	else
		dict_name = argv[1];
	size_file = byte_size(dict_name);
	buf = (char *) malloc (sizeof(char) * size_file);
	if (buf == NULL)
		write (1, "Dict Error\n", 11);
	else
	{
		copy_dict_to_buf(buf, dict_name, size_file);
		parse_dict(buf, argv [argc - 1]);
	}	
	free(buf);
}
