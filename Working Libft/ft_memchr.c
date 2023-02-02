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
}/* The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.   Return value: functions returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
