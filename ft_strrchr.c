/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:43:09 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/17 11:39:52 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		a++;
		s++;
	}
	while (a > 0 && *s != c)
	{
		s--;
		a--;
		if (*s == c)
			return ((char *)s);
	}
	return (0);
}

// int main ()
// {
//     const char *s ="jakahajzlakjijz";
//     char c= 'z';
//     printf("%s", ft_strrchr(NULL,c));
// }
