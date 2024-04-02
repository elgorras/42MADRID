/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:12:01 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/25 13:08:14 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		leng;
	char	*string;
	int		i;

	leng = ft_strlen(s1);
	string = malloc(leng + 1);
	i = 0;
	if (string == NULL)
		return (NULL);
	while (i < leng)
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
