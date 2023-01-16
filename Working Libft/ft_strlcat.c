/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:09:49 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/11 11:41:09 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len_d;
    size_t  len_s;
    char    *my_src;

    i = 0;
    len_d = 0;
    len_s = 0;
    my_src = (char *)(src);
    while (dst[i] != '\0')
    {
        len_d++;
        i++;
    }
    i = 0;
    while (src[i] != '\0')
    {
        len_s++;
        i++;
    }
    i = len_d;
    if (size == 0 ||  i >= size)
        return (size + len_s);
    j = 0;
    while(src[i] != '\0' && j < (size - 1))
    {
        dst[i+j] = my_src[j];
        j++;
    }
    dst[i+j] = '\0';
    return(len_d + len_s);
}
/*
The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.
*/
