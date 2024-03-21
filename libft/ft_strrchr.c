/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:37:20 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/14 15:43:45 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	character;
	char	*point;

	point = NULL;
	character = (char)c;
	while (*s != '\0')
	{
		if (*s == character)
			point = (char *)s;
		s++;
	}
	if (character == '\0')
		return ((char *)s);
	else
		return ((char *)point);
}
