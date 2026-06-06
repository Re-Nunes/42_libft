/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renatanu <renatanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 22:00:55 by renatanu          #+#    #+#             */
/*   Updated: 2026/06/05 00:31:45 by renatanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t len;
	size_t i;

	i = 0;
	len = ft_strlen(src);
	if (dsize == 0)
		return(len);
	while (src[i] && i < (dsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return(len);
}