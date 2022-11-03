/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:56:13 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/03 14:27:18 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize <= 0)
		return (0);
	i = 0;
	j = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(&src[i]) + ft_strlen(dst));
}
