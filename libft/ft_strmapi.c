/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:43:27 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/02 11:57:16 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*string;
	size_t			leng;

	i = 0;
	leng = ft_strlen(s);
	string = malloc(leng + 1 * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (i < leng)
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
