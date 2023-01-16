/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:39:00 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/12 13:31:51 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int  ft_extrm(int  sum, unsigned long long extrm_sum, int sign)
{
    unsigned long long max_i;
    unsigned long long  min_i;
    
    min = 9223372036854775808U;
    max = 9223372036854775807U;
    if(extrm_sum > max && sign == 1)
        return(-1);
    if(extrm_sum > min && sign == -1)
        return (0);    
    return(sum * sign);
}

int ft_atoi(const char *nptr)
{
    int  sum;
    int  i;
    int sign;
    char *my_nptr;
    unsigned long long extrm_sum;

    my_nptr = (char *)(nptr);
    sum = 0;
    extrm_sum = 0;
    i = 0;
    sign = 1;
    while(my_nptr[i] == 32 || (my_nptr[i] > 8 && my_nptr[i] <14) && nptr[i] != '\0')
        i++;
    if (my_nptr[i]= '-' || my_nptr[i]= '+')
    {
        if (my_nptr[i]= '-')
            sign = -1;
        i++;
    }
    while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= 9 ))
    {
        sum = sum * 10 + (my_nptr[i] - '0');
        extrm_sum = extrm_sum * 10 + (my_nptr[i] - '0');
        i++;
    }
    return (ft_extrm(sum, extrm_sum, sign));
}