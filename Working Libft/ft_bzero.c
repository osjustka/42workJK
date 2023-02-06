/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:06:15 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 10:57:57 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The bzero() function erases the data in the n bytes of the memory starting
 at the location pointed to by s, by writing zeros (bytes containing '\0')
 to that area. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*clean;
	size_t			i;

	clean = (unsigned char *)(s);
	i = 0;
	while (i < n)
	{
		clean[i] = '\0';
		i++;
	}
}
