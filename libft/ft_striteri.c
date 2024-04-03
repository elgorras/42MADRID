/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:59:29 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/02 12:11:55 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			leng;

	i = 0;
	leng = ft_strlen(s);
	while (i < leng)
	{
		f(i, &s[i]);
		i++;
	}
}
