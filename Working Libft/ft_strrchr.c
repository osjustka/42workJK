/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:55:14 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/11 12:57:26 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int len;
    char *my_s;
    
    my_s = (char *)(s);
    i = 0;
    len = 0;
    while (my_s[i] != '\0')
    {
        len++;
        i++;
    }
    if ((char)(c) == '\0')
        return (&my_s(len));
    i = 0;
    while (len > 0)
    {
        if (my_s[i] == (char)(c))
            return(&my_s[i]);
        len--;
    } 
    if (my_s[len] == (char)(c))
        return(my_s);
    return (0);
}