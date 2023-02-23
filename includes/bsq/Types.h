/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:30:28 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/02/23 10:31:28 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
// Daha önce tanımlanıp tanımlanmadığını kontrol eder ve devam eder. Tanımlanmadıysa tanımlar. IDFED kullanılmamasının sebebi tanımlansa bile ikinci tanımlamayı devam eder ve hata verir. IFDEF normal koşullar için kullanılır.
# define TYPES_H
// Define yapısı constant gibi yani sabit değerleri tutmak için kullanılır.
# define MIN(a, b) ((a) > (b) ? (b) : (a))
// Aldığı iki değer karşılaştırılır ve küçük değer döndürülür. 

typedef enum e_bool
// 
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
}	t_info;

typedef struct map_clone
{
	int	x;
	int	y;
}	t_clone;

#endif
