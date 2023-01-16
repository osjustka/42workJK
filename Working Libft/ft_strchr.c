/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:55:14 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/11 12:53:24 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    char *my_s;
    
    my_s = (char *)(s);
    i = 0;
    while (my_s[i] != '\0')
    {
        if (my_s[i] == (char)(c))
            return(&my_s[i]);
        i++;
    }
    if (my_s[i] == (char)(c))
        return(&my_s[i]);
    return (0);
}