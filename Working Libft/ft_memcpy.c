/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:22:03 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/11 10:41:40 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t				i;
	unsigned char		*dst;
	unsigned char   	*tex;

    if (dest == 0 && src == 0)
	{
		return (0);
	}
	i = 0;
	dst =(unsigned char*) dest;
	tex = (unsigned char*) src;
	/*
    test for ft_strncmp((char *)dst, (char *)tex, n) == 0))??
    */

    while (i < n)
	{
		dst[i] = tex[i];
		i++;
	}
	return (dest);

}