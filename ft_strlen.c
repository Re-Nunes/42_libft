// #include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *string)
{
	size_t len;

	len = 0;
	while(string[len])
	{
		len++;
	}
	return(len);
}

#include <stdio.h>
int main(void)
{
	char array[] = "nuvem";
	char array1[] = "dados em nuvem";
	long int result;

	result = ft_strlen(array);
	printf("%ld\n", result);
	printf("%ld\n", ft_strlen(array1));
	return(0);
}