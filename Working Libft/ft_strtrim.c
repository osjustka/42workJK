/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:22:56 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:35:15 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char *c, char *my_set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == my_set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_find_cf(char *my_s1, char *my_set)
{
	int	cf;

	cf = 0;
	while (ft_char_in_set(my_s1[cf], my_set) == 1 && my_s1[cf] != '\0')
		cf++;
	return (cf);
}

static int	ft_find_cb(char *my_s1, char *my_set)
{
	int	cb;

	cb = ft_strnlen(my_s1) - 1;
	while (ft_char_in_set(my_s1[cb], my_set) == 1 && cb > 0)
		cb--;
	return (cb);
}

static int	ft_len(char *my_s1, char *my_set)
{
	int	cf;
	int	cb;

	cf = ft_find_cf(my_s1, my_set);
	cb = ft_find_cb(my_s1, my_set);
	return (cb - cf + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*my_s1;
	char	*my_set;
	int		cf;
	int		cb;
	int		i;
	char	*trm_str;

	my_s1 = (char *)(s1);
	my_set = (char *)(set);
	if (my_s1 == 0 || my_set == 0)
		return (my_s1);
	cf = ft_find_cf(my_s1, my_set) - 1;
	cb = ft_find_cb(my_s1, my_set);
	if (cb - cf <= 0)
	{
		if (!(trm_str = malloc(sizeof(char))))
			return (0);
		trm_str[0] = '\0';
		return (trm_str);
	}
	if (!(trm_str = malloc(sizeof(char) * (ft_len(my_s1, my_set) + 1))))
		return (0);
	i = -1;
	while (++cf <= cb && my_s1[cf] != '\0')
		trm_str[++i] = my_s1[cf];
	trm_str[++i] = '\0';
	return (trm_str);
}
