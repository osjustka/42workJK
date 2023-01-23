/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:29:33 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:22:47 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*my_s1;
	char	*my_s2;
	char	*new_str;
	size_t	i;
	size_t	j;

	my_s1 = (char *)(s1);
	my_s2 = (char *)(s2);
	new_str = (char *)malloc(sizeof(char) * \
	(ft_strlen(my_s1) + ft_strlen(my_s2) + 1));
	if (new_str == 0)
		return (0);
	i = -1;
	while (++i < ft_strlen(my_s1))
	{
		new_str[i] = my_s1[i];
	}
	j = -1;
	while (i < ft_strlen(my_s1) + ft_strlen(my_s2))
	{
		new_str[i] = my_s1[++j];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
