/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:01:20 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/17 11:37:57 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	b;

	i = 0;
	ptr = (unsigned char *)s;
	b = (unsigned char )c;
	while (ptr[i] != '\0' && ptr[i] != b && i < n)
		i++;
	if (ptr[i] == b)
		return (ptr + i);
	else
		return (0);
}
