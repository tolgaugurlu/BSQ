/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:39:32 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 16:28:43 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

char	**split(char *str)
{
	char	**matrix;
	int		index;
	int		matrix_index;
	int		matrix_second;

	index = 0;
	matrix_second = 0;
	matrix_index = 0;
	matrix =(char **)malloc(sizeof(char) * ft_strlen(str));
	while (str[index])
	{
		if(str[index] == '\n')
		{
			matrix_index++;
			matrix_second = 0;
		}
		matrix[matrix_index][matrix_second] = str[index];
		index++;
		matrix_second++;
	}
	return (matrix);
}

t_info	*map_info(t_info *info, char *buffer)
{
	int	result;

	result = 0;
	while (*buffer >= '0' && *buffer <= '9')
	{
		result *= 10;
		result += *buffer - '0';
		buffer++;
	}
	info->column_size = result;
	info->avaliable_char = *(buffer);
	info->obstacle = *(buffer + 1);
	info->writable_char = *(buffer + 2);
	return (info);
}

t_info	*read_from_file(char *file_name)
{
	t_info	*info;
	char	buffer[MAX_INT];
	char	**matrix;
	int		file_index;
	int		size;
	int		first_line_size;

	file_index = open(file_name, O_RDONLY);
	size = read(file_index, buffer, MAX_INT);
	if (size == -1)
	{
		ft_putstr(MAP_ERROR);
		exit(1);
	}
	first_line_size = ft_strlen(buffer, "\n");
	matrix = split(&buffer[first_line_size]);
	info->matrix = matrix;
	info = map_info(info, buffer);
	return (info);
}
