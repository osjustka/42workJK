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
