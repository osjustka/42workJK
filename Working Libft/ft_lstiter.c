/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:13:21 by jkabelko          #+#    #+#             */
/*   Updated: 2023/02/01 11:13:44 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates the list ’lst’ and applies the function ’f’ on the content
of each node. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == 0 || f == 0)
		return ;
	while (lst != 0)
	{
		f(lst->content);
		lst = lst->next;
	}
}
