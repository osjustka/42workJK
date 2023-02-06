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

/* The ft_strlcpy() - function copies strings. strlcpy() takes the full size
of the buffer (not just the length) and guarantee to NUL-terminate the result
(as long as size is larger than 0. Note that a byte for the NUL should be
included in size.  src must be NUL-terminated. The function copies up to
size - 1 characters from the NUL-ter‐minated string src to dst,
NUL-terminating the result. */

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
