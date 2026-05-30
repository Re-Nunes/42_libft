#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void	*content;
	struct	s_list *next;
} t_list;

/* Protótipos das Funções da Parte 1 (Libc) */
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_islnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *string);

/* Protótipos das Funções da Parte 2 (Adicionais) */

/* Protótipos das Funções da Parte 3 (Bônus de Lista Encadeada) */


#endif