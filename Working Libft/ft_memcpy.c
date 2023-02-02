/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:22:03 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:17:01 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*txt;
	size_t			i;

	if (dest == NULL && src == NULL)
	{
		return (0);
	}
	i = 0;
	dst = (unsigned char *)(dest);
	txt = (unsigned char *)(src);
	while (i < n)
	{
		dst[i] = txt[i];
		i++;
	}
	return (dest);
}/* The memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap. Return value: The memcpy() function returns a pointer to dest. */

