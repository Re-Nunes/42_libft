/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renatanu <renatanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:36:33 by renatanu          #+#    #+#             */
/*   Updated: 2026/06/04 00:37:08 by renatanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest_cast;
	const unsigned char	*src_cast;

	i = 0;
	src_cast = (const unsigned char *)src;
	dest_cast = (unsigned char *)dest;
	while ((len + 1) > i)
	{
		dest_cast[len] = src_cast[len];
		len--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	array[] = "thing a bout";
// 	// char	dest[20] = " ";

// 	printf("%s\n", ft_memmove(array, array + 2, 4));
// 	return (0);
// }
