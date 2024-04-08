/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:13:40 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/08 15:51:15 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy_strings(char *string,
		const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	string = malloc(len + 1);
	if (string == NULL)
		return (NULL);
	return (copy_strings(string, s1, s2, len));
}
