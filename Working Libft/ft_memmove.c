/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:29:32 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/11 10:32:29 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *dst_b;
    unsigned char *src_b;
    size_t  i;
    
    dst_b =(unsigned char *) dest;
    src_b = (unsigned char *) src;
    if (dest == NULL && src == NULL)
		return (NULL);
    if (dst_b > src_b)
    {
        while (n > 0)
        {
            dst_b[n - 1] = src_b[n - 1];
            len--;
        }
    }
    else
    {
        i = -1;
        while(++i < n)
            dst_b[i] = src_b[i];
    }
    return (dst_b);
}