/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:32:37 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/27 16:22:20 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**allocate_substr(char **array, char const *s, char c)
{
	int		i;
	int		position;
	int		z;

	i = 0;
	position = 0;
	z = 0;
	while (s[i] != '\0')
	{
		position = 0;
		while (s[i] != c)
		{
			position++;
			i++;
		}
		if (position != 0)
		{
			array[z] = malloc(position + 1 * sizeof(char *));
			z++;
		}
		i++;
	}
	return (&array);
}

char	**num_substr(char const *s, char c)
{
	int		count;
	int		i;
	char	**array;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		s++;
	}
	array = malloc(count + 1 * sizeof(char *));
	return (&array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

	count = 0;
	array = num_substr(*s, c);
	while (*s != '\0')
	{
		
	}
	return (&array);
}
