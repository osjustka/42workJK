/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:13:45 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:00:55 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(unsigned int m, char *s, int i)
{
	unsigned int	n;

	n = m;
	if (n >= 10)
	{
		ft_putnbr(n / 10, s, i + 1);
		ft_putnbr(n % 10, s, i);
	}
	else
		s[i] = '0' + n;
}

static char	*print_s(char *s, int i)
{
	int		j;
	char	var;
	int		mid;
	int		len;

	j = 0;
	len = ft_strlen(s);
	mid = len / 2 + i;
	while (i < mid)
	{
		var = s[i];
		s[i] = s[len - j - 1];
		s[len - j - 1] = var;
		i++;
		j++;
	}
	return (s);
}

static int	ft_mem_size(int m)
{
	int	mem_size;

	mem_size = 0;
	if (m < 0)
		mem_size++;
	else if (m == 0)
		return (1);
	while (m % 10 != 0 || m / 10 != 0)
	{
		m = m / 10;
		mem_size++;
	}
	return (mem_size);
}

char	*ft_itoa(int n)
{
	unsigned int	m;
	int				mem_size;
	int				i;
	char			*s;

	m = n;
	i = 0;
	mem_size = ft_mem_size(m);
	s = malloc(sizeof(char) * (mem_size + 1));
	if (s == 0)
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		m *= -1;
		i++;
	}
	s[mem_size] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	ft_putnbr(m, s, i);
	return (print_s(s, i));
}
