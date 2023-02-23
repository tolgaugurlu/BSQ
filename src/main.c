/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:14:11 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 17:23:12 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"
#include <stdio.h>
int	main(int agc, char **agv)
{
	t_info	info;
	if (agc == 1)
	{
		//input
	}
	else if(agc == 2)
	{
		info = read_from_file(agv[1]);
		printf("%s" info->matrix[0]);
	}
	else if (agc > 2)
		print_error(TOO_MANY_ARG);
	return (0);
}
