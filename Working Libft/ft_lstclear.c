/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:02:41 by jkabelko          #+#    #+#             */
/*   Updated: 2023/02/01 11:03:04 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp1;
	t_list	*temp2;
	
	if (lst == 0 || del == 0 || *lst == 0)
		return ;
	temp1 = *lst;
	temp2 = temp1;
	while (temp1 != 0)
	{
		del(temp1->content);
		temp1 = temp1->next;
		free(temp2);
		temp2 = temp1;
	}
	*lst = 0;	
}
