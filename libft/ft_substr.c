/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:51:04 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/25 18:44:52 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substring;
	size_t			count;

	i = start;
	count = 0;
	if (ft_strlen(s) <= start)
		substring = malloc(1);
	else if (ft_strlen(&s[i]) > len)
		substring = malloc(len + 1);
	else
		substring = malloc(ft_strlen(&s[i]) + 1);
	if (substring == NULL)
		return (NULL);
	while (ft_strlen(s) > start && s[i] != '\0' && count < len)
	{
		substring[count] = s[i];
		i++;
		count++;
	}
	substring[count] = '\0';
	return (substring);
}
