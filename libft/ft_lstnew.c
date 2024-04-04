/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:26:45 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/04 11:13:53 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newcontent;

	newcontent = (t_list *)malloc(sizeof(t_list));
	if (newcontent == NULL)
		return (NULL);
	newcontent->content = content;
	newcontent->next = NULL;
	return (newcontent);
}
