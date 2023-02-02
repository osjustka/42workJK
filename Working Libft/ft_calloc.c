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
	unsigned long long	check;
	
	if (size != 0)
	{
		check = nmemb * size;
		if (check / size != nmemb)
			return (0);
	}	
	if (nmemb != 0)
	{
		check = nmemb * size;
		if (check / nmemb != size)
			return (0);
	}
	my_mem = malloc(nmemb * size);
	if (my_mem == NULL)
		return (NULL);
	ft_bzero(my_mem, nmemb * size);
	return (my_mem);
}/* void *calloc(size_t nmemb, size_t size)
The malloc() function allocates size bytes and returns a pointer to the allocated memory. The memory is not initialized. If size is 0, then malloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
On error, function returns NULL. 
*/
