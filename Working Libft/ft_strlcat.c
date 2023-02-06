/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:09:49 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:26:23 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strlcat(void) function appends the NUL-terminated string src
to the end of dst.  It will append at most size - strlen(dst) - 1 bytes,
NUL-termi‐ nating the result. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;
	char	*my_src;

	my_src = (char *)(src);
	if ((dst == NULL || src == NULL) && size == 0)
		return (size);
	len_d = ft_strlen((const char *)(dst));
	len_s = ft_strlen((const char *)(my_src));
	i = len_d;
	if (size == 0 || i >= size)
		return (size + len_s);
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = my_src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_d + len_s);
}
