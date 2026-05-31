#include <libft.h>

void *ft_memset(void *str, int value, size_t len)
{
	size_t i;

	i = 0;
	while( i < len)
	{
		((unsigned char *)str)[i] = value;
		i++; 
	}
	return(str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char array[] = "rosa";

// 	ft_memset(array, 97, 4);
// 	printf("%s\n", array);
// 	return(0);
// }
