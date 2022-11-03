/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:22:13 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/02 11:30:47 by kmouradi         ###   ########.fr       */
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
	if (v == 0)
		return (0);
	if (s)
	{
		if (start >= ft_strlen(s))
			return (v);
		while (s[start] != '\0' && start <= k)
		{
			v[j] = s[start];
			start++;
			j++;
		}
		v[j] = '\0';
		return (v);
	}
	return (0);
}
// 	int main(void)
// 	{
// 	int n;
// 	int m;

// 	m = 50;
// 	n = 9;
// 	printf(".%s.", ft_substr("substr function Implementation", m, n));
// 	return (0);
// }
