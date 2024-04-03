/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:42:45 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/02 13:26:47 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(int n)
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

char	*min_int(void)
{
	int				i;
	unsigned int	value;
	char			*string;

	i = 9;
	value = 214748364;
	string = malloc(12 * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[0] = '-';
	while (i > 0)
	{
		string[i] = 48 + (value % 10);
		value = value / 10;
		i--;
	}
	string[10] = '8';
	string[11] = '\0';
	return (string);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		i;
	int		value;

	value = n;
	i = count_num(n) - 1;
	if (n == -2147483648)
		return (min_int());
	string = malloc((count_num(n) + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	if (n < 0)
		value = -value;
	while (i >= 0)
	{
		string[i] = 48 + (value % 10);
		value = value / 10;
		i--;
	}
	if (string[0] == 48 && n != 0)
		string[0] = '-';
	string[count_num(n)] = '\0';
	return (string);
}
