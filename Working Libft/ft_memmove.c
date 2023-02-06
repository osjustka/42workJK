/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:29:32 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:17:55 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memmove() function copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the bytes in src are first copied into a temporary array that does not overlap
src or dest, and the bytes are then copied from the temporary array to dest.
Return value: function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_b;
	unsigned char	*src_b;

	dst_b = (unsigned char *)(dest);
	src_b = (unsigned char *)(src);
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dst_b > src_b)
	{
		while (n > 0)
		{
			dst_b[n - 1] = src_b[n - 1];
			n--;
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			dst_b[i] = src_b[i];
	}
	return (dst_b);
}
