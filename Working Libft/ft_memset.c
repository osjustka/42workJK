/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:19:19 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 12:27:47 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function returns a pointer to dest.
Return value: function returns a pointer to the memory area s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)(s);
	while (n--)
		*a++ = (unsigned char)(c);
	return (s);
}
