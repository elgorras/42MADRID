/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:12:23 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/03/19 13:12:52 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long	leng_src;
	unsigned long	leng_dst;
	unsigned long	total;
	unsigned long	i;

	leng_src = ft_strlen(src);
	leng_dst = ft_strlen(dst);
	total = leng_src + leng_dst;
	i = 0;
	if (dstsize <= leng_dst)
		return (dstsize + leng_src);
	while (leng_dst < dstsize - 1 && src[i] != '\0')
	{
		dst[leng_dst] = src[i];
		leng_dst++;
		i++;
	}
	dst[leng_dst] = '\0';
	return (total);
}
