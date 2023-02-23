/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:21:38 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 15:31:26 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef READER_H
# define READER_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "types.h"

t_info	*read_from_file(char *file_name);
#endif
