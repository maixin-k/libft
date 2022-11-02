/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:45:07 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 09:45:07 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "limits.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;

	x = n;
	if (x < 0)
	{
		ft_putchar_fd('-', fd);
			x *= -1;
	}
	if (x > 9)
		ft_putnbr_fd((x / 10), fd);
	ft_putchar_fd(((x % 10) + 48), fd);
}

// int main ()
// {
//         int     fd = open("bitch", O_WRONLY| O_CREAT);
//         ft_putnbr_fd(0, fd);
// }