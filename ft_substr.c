/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:22:13 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/17 11:29:16 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*v;
	size_t	j;
	size_t	k;

	j = 0;
	k = start + len - 1;
	v = (char *)malloc((len + 1) * sizeof(char));
	if (s)
	{
		while (s[start] != '\0' && start <= k)
		{
			v[j] = s[start];
			start++;
			j++;
		}
		v[j] = '\0';
		return (v);
	}
	return (NULL);
}
// 	int main(void)
// 	{
// 	int n;
// 	int m;

// 	m = 7;
// 	n = 12;
// 	printf("[%s]\n", ft_substr("substr function Implementation", m, n));
// 	return (0);
// }
