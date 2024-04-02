/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:50:27 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/02 13:53:30 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(int n)
{
	int	count;
	int	value;

	count = 0;
	value = n;
	if (n < 0)
	{
		count = 1;
		value = -value;
	}
	while (value > 0)
	{
		value = value / 10;
		count++;
	}
	if (n == 0)
		count = 1;
	if (n == -2147483648)
		count = 11;
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr[12];
	int		i;
	int		value;

	i = count_nbr(n) - 1;
	value = n;
	if (n < 0)
		value = -value;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		nbr[count_nbr(n)] = '\0';
		while (i >= 0)
		{
			nbr[i] = 48 + (value % 10);
			value = value / 10;
			i--;
		}
		if (nbr[0] == 48 && n != 0)
			nbr[0] = '-';
		write(fd, nbr, ft_strlen(nbr));
	}
}
