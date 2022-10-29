/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:27:51 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/22 13:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*v;

	i = 0;
	len = ft_strlen(s1);
	v = (char *)(malloc(sizeof(char) * len + 1));
	while (i < len)
	{
		v[i] = s1[i];
		i++;
	}
	v[i] = '\0';
	return (v);
}
int main()
{
	printf("%s",*ft_strdup("kawtarmouradi"));
}
