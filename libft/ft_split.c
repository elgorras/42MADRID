/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:05:33 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/08 15:26:34 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **array, int z)
{
	while (z >= 0)
	{
		free(array[z]);
		z--;
	}
	free(array);
	return (NULL);
}

static char	*allocate_cpy(const char *s, int i, int end)
{
	int		leng;
	char	*substr;

	leng = end - i;
	substr = malloc((leng + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + i, leng + 1);
	substr[leng] = '\0';
	return (substr);
}

static char	**allocate_substr(char **array, const char *s, char c)
{
	int		i;
	int		end;
	int		z;

	z = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			end = i;
			while (s[end] && s[end] != c)
				end++;
			array[z] = allocate_cpy(s, i, end);
			if (array[z] == NULL)
				return (free_array(array, z));
			z++;
			i = end;
		}
		else
			i++;
	}
	array[z] = NULL;
	return (array);
}

static char	**num_substr(const char *s, char c)
{
	int		count;
	int		i;
	char	**array;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			|| (i == 0 && s[i] != c) || (s[i] == '\0' && s[i - 1] != c))
			count++;
		i++;
	}
	array = malloc((count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	return (allocate_substr(array, s, c));
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = num_substr(s, c);
	if (array == NULL)
		return (NULL);
	return (array);
}
