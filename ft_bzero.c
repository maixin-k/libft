/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:23:50 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/17 11:48:36 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
	str[i] = 0;
	i++;
	}
}

// int main ()
// {
//    char  str1[16]= "kaw";
//    ft_bzero(str1,15);
//    printf("%s",str1);
//     return (0);
// }
