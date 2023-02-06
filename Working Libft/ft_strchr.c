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

/* ft_strchr() - function returns a pointer to the first occurrence of
the character c in the string s. The strchr() function returns a pointer
to the matched character or NULL if the character is not found.
The terminating null byte is considered part of the string, so that if
c is specified as '\0', functions returns a pointer to the terminator. */

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
