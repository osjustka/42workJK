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

static int	ft_char_in_set(char c, char *my_set)
{
	int	i;

	i = 0;
	while (my_set[i] != '\0')
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

	cb = ft_strlen(my_s1) - 1;
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
	char	*trm_str;
	int		i;
	int		j;

	my_s1 = (char *)(s1);
	my_set = (char *)(set);
	if (ft_find_cb(my_s1, my_set) - (ft_find_cf(my_s1, my_set) - 1) <= 0)
	{
		trm_str = malloc(sizeof(char));
		if (trm_str == NULL)
			return (NULL);
		trm_str[0] = '\0';
		return (trm_str);
	}
	j = -1;
	trm_str = malloc(sizeof(char) * (ft_len(my_s1, my_set) + 1));
	if (trm_str == NULL)
		return (NULL);
	i = -1;
	while (++i <= ft_find_cb(my_s1, my_set) && my_s1[j] != '\0')
		trm_str[++j] = my_s1[i];
	trm_str[++j] = '\0';
	return (trm_str);
}
