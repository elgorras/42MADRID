/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:05:28 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/08 15:54:24 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	startpoint(char const *s1, char const *set)
{
	int		start;
	int		stop;
	int		z;

	start = 0;
	stop = 0;
	z = 0;
	while (s1[start] != '\0' && stop < 1)
	{
		z = 0;
		stop = 0;
		while (set[z] != '\0' && stop != -1)
		{
			if (s1[start] == set[z])
			{
				start++;
				stop = -1;
			}
			z++;
		}
		if (stop == 0)
			stop = 1;
	}
	return (start);
}

static int	endpoint(char const *s1, char const *set)
{
	int		stop;
	int		z;
	size_t	len;

	stop = 0;
	z = 0;
	len = ft_strlen(s1);
	while (len > 0 && stop < 1)
	{
		z = 0;
		stop = 0;
		while (set[z] != '\0' && stop == 0)
		{
			if (s1[len - 1] == set[z])
				stop = -1;
			z++;
		}
		if (stop == 0)
			stop = 1;
		else
			len--;
	}
	return (ft_strlen(s1) - len);
}

static char	*copy_strings(char *string, char const *s1, int start, int len)
{
	int	i;

	i = 0;
	while (i < (len - 1))
	{
		string[i] = s1[start];
		start++;
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*string;

	if (!s1 || !set)
		return (NULL);
	start = startpoint(s1, set);
	end = endpoint(s1, set);
	len = ft_strlen(s1) - (start + end) + 1;
	if (((start + end) >= (int)ft_strlen(s1)))
		string = malloc(1);
	else
		string = malloc(len);
	if (string == NULL)
		return (NULL);
	copy_strings(string, s1, start, len);
	return (string);
}
