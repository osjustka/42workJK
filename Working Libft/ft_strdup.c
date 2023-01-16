/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:31:16 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/13 09:48:12 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *my_string;
    char    *my_s;
    int len;
    int i;

    my_s = (char *)(s);
    i = 0;
    len = 0;
    while(my_s[i] != '\0')
    {
        len++;
        i++;
    }
    my_string = (char *)malloc(sizeof(char)*(len +1);
    if (my_string == NULL)
        return (0);
    i = 0;
    while(my_s[i] != '\0')
    {
        my_string[i] = my_s[i];
        i++;
    }
    my_string[i] = '\0';
    return(&my_string);
}