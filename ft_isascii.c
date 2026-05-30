#include <stdio.h>

int ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return(1);
	return(0);
}

//esta funcional e é só apagar a main.c
int main(void) 
{
	printf("%d\n", ft_isascii(0));
	return(0);
}