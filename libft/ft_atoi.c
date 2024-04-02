/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:34:35 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/22 14:30:48 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned char	*string;
	int				i;
	int				num;
	int				sign;

	i = 0;
	num = 0;
	sign = 1;
	string = (unsigned char *)str;
	while (string[i] == ' ' || string[i] == '\n' || string[i] == '\t'
		|| string[i] == '\v' || string[i] == '\f' || string[i] == '\r')
		i++;
	if (string[i] == '-')
		sign = -1;
	if (string[i] == '+' || sign == -1)
		i++;
	if (string[i] < '0' || string[i] > '9')
		return (0);
	while (string[i] >= '0' && string[i] <= '9')
	{
		num = (num * 10 + (string[i] - '0'));
		i++;
	}
	return (num * sign);
}
