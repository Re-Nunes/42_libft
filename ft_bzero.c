#include "libft.h"


void	ft_bzero(void *s, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Renata";

// 	printf("Antes: %s\n", str);
// 	ft_bzero(str, 3);
// 	printf("Depois: %s\n", str);
// 	return (0);
// }