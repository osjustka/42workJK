/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:21:17 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:01:21 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*my_s;
	size_t			i;

	my_s = (unsigned char *)(s);
	i = 0;
	while (i < n)
	{
		if (my_s[i] == (unsigned char)(c))
			return (&my_s[i]);
		i++;
	}
	return (0);
}
