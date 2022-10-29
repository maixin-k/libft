#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	int		l;
	char	*str;
	int		i;

	i = 0;
	l = ft_strlen(s);
	str = (char*)malloc(sizeof(char ) * (l + 1));

	if (s == NULL)
		return(NULL);
	while(s[i] != '\0')
	{
		str[i] = f(i, s[i])
		i++;
	}
	str[l] = '\0';
	return (str);
}
