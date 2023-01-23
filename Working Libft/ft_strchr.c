/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:55:14 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:20:01 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*my_s;
	int		i;

	my_s = (char *)(s);
	i = 0;
	while (my_s[i] != '\0')
	{
		if (my_s[i] == (char)(c))
			return (&my_s[i]);
		i++;
	}
	if (my_s[i] == (char)(c))
		return (&my_s[i]);
	return (0);
}
