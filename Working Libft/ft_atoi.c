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

/* int atoi(const char *nptr); The atoi() function converts the initial
portion of the string pointed to by nptr to int.  atoi() does not detect
errors.  RETURN VALUE: The converted value or 0 on error. min_i - 1 gives
two's complement representation of -1. */

#include "libft.h"

static int	ft_extrm(int sum, unsigned long long extrm_sum, int sign)
{
	unsigned long long	max_i;
	unsigned long long	min_i;

	min_i = 9223372036854775808U;
	max_i = 9223372036854775807U;
	if (extrm_sum > max_i && sign == 1)
		return (-1);
	if (extrm_sum > min_i && sign == -1)
		return (0);
	return (sum * sign);
}

static int	ft_sign(char *str, int i, int *sign)
{
	if (str[i] == '-')
	{
		*sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	unsigned long long	extrm_sum;
	char				*my_nptr;
	int					i;
	int					sum;
	int					sign;

	my_nptr = (char *)(nptr);
	sum = 0;
	extrm_sum = 0;
	i = 0;
	sign = 1;
	while (my_nptr[i] == 32 || (my_nptr[i] > 8 && my_nptr[i] < 14))
		i++;
	i = ft_sign(my_nptr, i, &sign);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = sum * 10 + (my_nptr[i] - '0');
		extrm_sum = extrm_sum * 10 + (my_nptr[i] - '0');
		i++;
	}
	return (ft_extrm(sum, extrm_sum, sign));
}
