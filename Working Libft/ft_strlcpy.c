/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:43:43 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/11 11:07:57 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  len;
    char    *my_src;

    i =0;
    len = 0;
    my_src = (char *)(src);
    while (src[i] != '\0')
    {
        len++;
        i++;
    }
    if (size == 0 || dst == 0)
        return (len);
    while(mysrc[i] != '\0' && i < (size - 1))
    {
        dst[i] = my_src[i];
        i++;
    }
    dst[i] = '\0';
    return(len);
}
