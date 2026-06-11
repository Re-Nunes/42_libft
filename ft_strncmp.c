/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renatanu <renatanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:11:29 by renatanu          #+#    #+#             */
/*   Updated: 2026/06/11 14:11:30 by renatanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char ) s1[i] - (unsigned char) s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "BANANA";
// 	char z[] = "BANANB";

// 	printf("%d\n", ft_strncmp(s, z, 6));
// }