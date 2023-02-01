/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:24:07 by jkabelko          #+#    #+#             */
/*   Updated: 2023/02/01 11:24:34 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pnt;
	t_list	*temp1;
	t_list	*temp2;
	
	if (lst == 0 || f == 0 || del == 0)
		return (NULL) ;
	pnt = ft_lstnew(f(lst->content));
	if (pnt == 0)
		return (NULL);
	temp1 = lst->next;
	temp2 = pnt;
	while (temp1 != 0)
	{
		temp2 = ft_lstnew(f(temp1->content));
		if (temp2 == 0)
		{
			ft_lstclear(&pnt, del);
			return (0);
		}
		ft_lstadd_back(&pnt, temp2);
		temp1 = temp1->next;
	}
	return	(pnt);
}	
