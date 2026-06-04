/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renatanu <renatanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:36:33 by renatanu          #+#    #+#             */
/*   Updated: 2026/06/04 17:49:13 by renatanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	i = 0;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	if (temp_dest < temp_src)
	{
		while (i < len)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}	
	else
	{	
		while (len-- > 0)
		{
			temp_dest[len] = temp_src[len];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	// char	array[] = "abcdefg";
// 	char str[] = "123456789";

// 	memmove(str, str, 5);
// 	printf("Resultado: %s\n", str);	

// 	char str1[] = "123456789";
// 	printf("%s\n", ft_memmove(str1, str1, 5));
// 	return (0);
// }
