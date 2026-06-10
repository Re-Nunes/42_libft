#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;
	char *str;
	unsigned char c_char;

	str = (char *) s;
	c_char = (unsigned char) c;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if ((unsigned char)str[len] == c_char)
			return(&str[len]);
		len--;
	}
	return(NULL);
}
