/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renatanu <renatanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 00:29:49 by renatanu          #+#    #+#             */
/*   Updated: 2026/06/04 21:12:31 by renatanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h> // Define malloc e free
# include <stddef.h> // Define size_t e NULL
# include <unistd.h> // Define write e ssize_t

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* Protótipos das Funções da Parte 1 (Libc) */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *string);
void	*ft_memset(void *str, int value, size_t len);
void	ft_bzero(void *s, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
char	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t dsize);
int		ft_toupper(int c);
int		ft_tolower(int c);


/* Protótipos das Funções da Parte 2 (Adicionais) */

/* Protótipos das Funções da Parte 3 (Bônus de Lista Encadeada) */

#endif