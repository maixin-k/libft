/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:12:22 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/03 11:55:13 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	else
		return (0);
}

// #include <stdio.h>
// int main ()
// {
//     const char *s ="kawtar";
//     char c= '\0';
//     printf("%s", ft_strchr(s,c));
// }
