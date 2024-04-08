/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:04:05 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/08 13:36:08 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*nodo;
	void	*mapped;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		mapped = f(lst->content);
		nodo = ft_lstnew(mapped);
		if (nodo == NULL)
		{
			ft_lstclear(&newlist, del);
			del(mapped);
			return (NULL);
		}
		ft_lstadd_back(&newlist, nodo);
		lst = lst->next;
	}
	return (newlist);
}
