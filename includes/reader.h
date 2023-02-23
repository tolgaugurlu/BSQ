/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:21:38 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 18:59:05 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef READER_H
# define READER_H

# define MAX_INT 2147483647
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "types.h"
# include "strings.h"
# include "error_handler.h"

char	**split(char *str, t_info *info);
t_info	*map_info(t_info *info, char *buffer);
t_info	*read_from_file(char *file_name);
#endif
