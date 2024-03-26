/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:13:40 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/26 16:47:29 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	string = malloc(len + 1);
	if (string == NULL)
		return (NULL);
	while (i < len)
	{
		if (*s1 != '\0')
		{
			string[i] = *s1;
			s1++;
		}
		else
		{
			string[i] = *s2;
			s2++;
		}
		i++;
	}
	string[i] = '\0';
	return (string);
}
