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

/* The calloc() function allocates memory for an array of nmemb elements of
size bytes each and returns a pointer to the allocated memory.  The memory is
set to zero.  If nmemb or size is 0, then calloc() returns either NULL,
or a  unique  pointer  value that  can  later  be successfully passed to free().
If the multiplication of nmemb and size would result in integer overflow,
then calloc() returns an error. */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void				*my_mem;
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
}
