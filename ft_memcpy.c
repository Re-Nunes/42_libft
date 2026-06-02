#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	unsigned char *dest_cast;
	const unsigned char *src_cast;

	i = 0;
	dest_cast = (unsigned char *)dest;
	src_cast = (const unsigned char *)src;
	while (i < len)
	{
		dest_cast[i] = src_cast[i];
		i++;
	}
	return(dest);
}