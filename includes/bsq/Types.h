/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:30:28 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 16:24:32 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H
# define MIN(a, b) ((a) > (b) ? (b) : (a))

typedef enum e_bool
{
	false = 0,
	true = 1,
}	t_bool;

# define TRUE 1
# define FALSE 0

typedef struct a_info
{
	char	**matrix;
	char	obstacle;
	char	avaliable_char;
	char	writable_char;
	int		column_size;
}	t_info;

typedef struct map_clone
{
	int	x;
	int	y;
}	t_clone;

#endif
