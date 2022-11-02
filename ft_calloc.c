/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:33:16 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/01 13:08:18 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*v;
	size_t	i;

	i = 0;
	v = (char *) malloc(count * size);
	if (v == 0)
		return (0);
	while (i < count * size)
	{
		v[i] = 0;
		i++;
	}
	return (v);
}

// int main ()
// {
//     char *s;

//     s = ft_calloc(3, 4);
// }
