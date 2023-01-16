/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:29:33 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/13 11:22:18 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *my_s1;
    char #include "libft.h"*my_s2;
    char *new_str;
    int len1;
    int len2;
    size_t i;
    size_t j;

    my_s1 = (char *)(s1);
    my_s2 = (char *)(s2);
    len1 = ft_strlen(my_s1);
    len2 = ft_strlen(my_s2);
    new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (new_str == 0)
        return(0);
    i = 0;
    while (i < len1)
    {   
        new_str[i] = my_s1[i];
        i++;
    }
    j = 0;
    while (i < len1 + len2)
    {
        new_str[i] = my_s1[j];
        i++;
        j++; 
    }
    new_str[i] = '\0';
    return(new_str);
}