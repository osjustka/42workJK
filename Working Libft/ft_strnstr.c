/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:59:54 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:33:20 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*my_big;
	char	*my_little;

	if ((big == NULL || little == NULL) && len == 0)
		return (0);
	my_big = (char *)(big);
	my_little = (char *)(little);
	i = 0;
	if (my_little[0] == '\0')
		return (my_big);
	while (my_big[i] != '\0' && i < len)
	{
		j = 0;
		while (my_big[i + j] == my_little[j] && i + j < len \
		&& my_little[j] != '\0' && my_big[i + j] != '\0')
		{
			j++;
		}
		if (my_little[j] == '\0')
			return (&my_big[i]);
		i++;
	}
	return (0);
}
