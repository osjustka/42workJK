/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:42:46 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:01:44 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memcmp() function compares the first n bytes (each interpreted as
unsigned char) of the memory areas s1 and s2. Return values: The memcmp()
function returns an integer less than, equal to, or greater than zero if
the first n bytes of s1 is found,respectively, to be less than, to match,
or be greater than the first n bytes of s2. For a nonzero return value,
the sign is determined by the sign of the difference between the first pair
of bytes interpreted as unsigned char) that differ in s1 and s2. If n is zero,
the return value is zero.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*my_s1;
	unsigned char	*my_s2;
	size_t			i;

	my_s1 = (unsigned char *)(s1);
	my_s2 = (unsigned char *)(s2);
	if (n == 0)
		return (0);
	i = 0;
	while (my_s1[i] == my_s2[i] && i < n - 1)
	{
		i++;
	}
	if (i >= n)
		return (0);
	else
		return (my_s1[i] - my_s2[i]);
}
