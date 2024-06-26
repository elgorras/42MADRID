/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanz-sa <jsanz-sa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:29:59 by jsanz-sa          #+#    #+#             */
/*   Updated: 2024/04/08 11:36:16 by jsanz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*backup;

	if (!lst || !del)
		return ;
	backup = NULL;
	aux = *lst;
	while (aux != NULL)
	{
		backup = aux->next;
		del(aux->content);
		free(aux);
		aux = backup;
	}
	*lst = NULL;
}
