/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:33:55 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 10:58:29 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*my_mem;

	my_mem = (char *)malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	ft_bzero(my_mem, nmemb * size);
	return (my_mem);
}
