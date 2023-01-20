/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:43:43 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:28:54 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*my_src;

	i = 0;
	len = 0;
	my_src = (char *)(src);
	len = ft_strlen(my_src);
	if (size == 0 || dst == 0)
		return (len);
	while (my_src[i] != '\0' && i < (size - 1))
	{
		dst[i] = my_src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
