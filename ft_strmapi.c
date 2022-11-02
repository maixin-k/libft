/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:44:15 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 13:44:15 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	int		l;
	char	*str;
	int		i;

	if (!s || !f)
		return (0);
	i = 0;
	l = ft_strlen(s);
	str = (char *)malloc(sizeof(char ) * (l + 1));
	if (str == 0)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[l] = '\0';
	return (str);
}
