#include "libft.h"

	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*str;
	int		i;

i = 0;
if (s1 && s2)
{
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
	i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[len1 + i] = s2[i];
		i++;
	}
	str[len1 + len2] = '\0';
	return (str);
}
return (0);
}
