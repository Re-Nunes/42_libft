int	ft_isprint(int c)
{
	if(!(c >= 32 && c <= 126))
		return(0);
	return(1);
}

// #include <stdio.h>

// int main(void)
// {
// 	char c;

// 	c = ' ';
// 	printf("%d\n", ft_isprint(c));
// 	return(0);
// }