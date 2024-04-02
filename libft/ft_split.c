/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:32:37 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/01 13:14:44 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c);

char	**allocate_memory(int num_splits)
{
	char	**result;
	int		i;

	result = (char **)malloc((num_splits + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i <= num_splits)
	{
		result[i] = NULL;
		i++;
	}
	return (result);
}

int	count_splits(const char *s, char c)
{
	int	count;
	int	inside_word;

	count = 0;
	inside_word = 0;
	while (*s != '\0')
	{
		if (*s == c)
			inside_word = 0;
		else if (!inside_word)
		{
			inside_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	*extract_word(const char *start, const char *end)
{
	int			length;
	char		*word;
	const char	*p;

	length = end - start;
	word = (char *)malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	p = start;
	while (p < end)
	{
		*word = *p;
		word++;
		p++;
	}
	*word = '\0';
	return (word - length);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(const char *s, char c)
{
	int			num_splits;
	char		**result;
	int			index;
	const char	*start;

	num_splits = count_splits(s, c);
	result = allocate_memory(num_splits);
	index = 0;
	start = s;
	if (result == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
		{
			if (s > start)
				result[index++] = extract_word(start, s);
			start = s + 1;
		}
		s++;
	}
	if (s > start)
		result[index++] = extract_word(start, s);
	return (result);
}
