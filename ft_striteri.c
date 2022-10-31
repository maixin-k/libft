/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:42:41 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 09:42:41 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libc.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL )
		return (NULL);
	while (s[i] != '\0')
	{
		f (i, & s[i]);
		i++;
	}
}
