/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:13:04 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 19:29:54 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H
# include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_strlen_with_point(char *str, char stop_point);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
void	print_error(char *message);
#endif
