/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renatanu <renatanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 21:17:25 by renatanu          #+#    #+#             */
/*   Updated: 2026/06/03 23:35:35 by renatanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isascii(128));
// 	printf("%d\n", ft_isascii('\0'));
// 	return(0);
// }
