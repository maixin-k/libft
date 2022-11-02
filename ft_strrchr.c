/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:43:09 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/01 11:38:35 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
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
//     char c= 'k';
//     printf("%s", ft_strrchr(s,c));
// }
