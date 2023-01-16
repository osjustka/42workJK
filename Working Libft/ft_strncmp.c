/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:45:15 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/13 09:44:20 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char *my_s1;
    char *my_s2;
    size_t  i;
    int len1;
    int len2;

    my_s1 = (char *)(s1);
    my_s2 = (char *)(s2);
    i = 0;
    if (n > 0)
    {
        while ((my_s1[i] == my_s2[i]) &&
         ((my_s1[i] != '\0') || (my_s2[i]!= '\0')) && i < n - 1)
        {
            i++;
        }
        return ((unsigned char)(my_s1[i]) - (unsigned char)(my_s2[i]));
    }
    return (0);
}