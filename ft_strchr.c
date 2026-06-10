#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	int i;
	char *str;
	unsigned char c_char;

	if(s == NULL)
		return(NULL);
	i = 0;
	str = (char *) s;
	c_char = (unsigned char) c;
	while (str[i])
	{
		if ((unsigned char)str[i] == c_char)
			return(&str[i]);
		i++;
	}
	if (c_char == '\0')
		return (&str[i] );
	return(NULL);
}

// int main(void)
// {
// 	char *final = ""; // esse ponteiro tem '\0' dentro dele, está vázio.
// 	//char *final= NULL (isso é um ponteiro nulo)
// 	char *recebe;

// 	recebe = ft_strchr(final, '\0');  // Buscando terminador
// 	// Agora recebe NÃO é NULL (aponta para o final da string)

// 	if (recebe == NULL)
// 		printf("(NULL)\n");
// 	else
// 		printf("Encontrou o terminador no endereço %p\n", recebe);

// 	return (0);
// }