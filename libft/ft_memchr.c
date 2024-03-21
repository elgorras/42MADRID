/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:03:41 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/21 12:28:55 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	character;
	unsigned char	*source;
	size_t			i;

	character = (unsigned char)c;
	source = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (source[i] == character)
			return ((void *)source + i);
		i++;
	}
	return (NULL);
}
