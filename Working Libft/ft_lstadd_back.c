/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:25:37 by jkabelko          #+#    #+#             */
/*   Updated: 2023/02/01 10:26:06 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node ’new’ at the end of the list.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pnt;

	if (new == 0)
		return ;
	pnt = *lst;
	if (pnt == 0)
	{
		*lst = new;
		return ;
	}
	pnt = ft_lstlast(*lst);
	pnt->next = new;
}
