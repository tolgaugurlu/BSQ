/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:39:32 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 19:54:07 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	read_line(int fd)
{
	int	i;
	char c;
	i = 0;
	while (c != '\n')
	{
		read(fd, &c, 1);
		i++;
	}
	return (i);
}
char    *substring(char *string, int min, int max)
{
    int    a;
    char *yenichar;
    yenichar = malloc(sizeof(char) * (max - min));
    a = 0;
    while (min < max)
    {
        yenichar[a] = string[min];
        min++;
        a++;
    }
    return (yenichar);
}
t_info *map_info(char *info, t_info a)
{
	int	i;
	int line_nbr;
	i = 0;
	line_nbr = 0;
	while (info[i] >= '0' & info[i] <= '9')
	{
		line_nbr *= 10;
		line_nbr += info[i] - '0';
		i++;
	}
	a->row_size = line_nbr;
	a->avaliable_char = info[i];
   	a->obstacle = info[i + 1];
	a->writable_char = info[i + 2];
	return (a); 
}
char	**create_map(int line_nbr, int char_nbr, int filedes)
{
	char	**map_table;
	int 	i;
	
	i = 0;
	map_table = (char **) malloc(sizeof(char *) * line_nbr);
	while (i < line_nbr)
	{
		map_table[i] = (char *) malloc(sizeof(char) * char_nbr);
		read(filedes, map_table[i], char_nbr);
		i++;
	}
	return (map_table);
}
t_info *read_from_file(char *map_path)
{	int filedes = open(map_path, O_RDONLY);
	int fd = open(map_path, O_RDONLY);
	int i;
	char *map_info_char;
	int	map_line_nbr;
	t_info info;

	i = read_line(filedes);
	map_info_char = (char *) malloc(sizeof(char) * i);
	read(fd, map_info_char, i);
	i = read_line(filedes);
	map_info(map_info_char, info);
	info->matrix = create_map(info->row_size, i, fd);
	int h = 0;
	while (h < map_line_nbr)
	{
		printf("%s", map_table[h]);
		h++;
	}
	
	return 0;
}

t_info read_from_file(char *ilksatir){
		int c =0;
		while(ilksatir[c] > '0' && ilksatir[c] < '9'){
			c++;
		}
		int colum_size= ft_atoi(substring(ilksatir,0,c));
		char empyt = ilksatir[c];
		char engel = ilksatir[c+1];
		char full = ilksatir[c+2];
		
		
}
// 9.ox
// t
// }_info => src,col_size engel full boş
