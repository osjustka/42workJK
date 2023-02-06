/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:55:14 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:34:28 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strrchr() - function returns a pointer to the last occurrence of
the character c in the string s. RETURN VALUE: function returns a pointer
to  the  matched character  or NULL if the character is not found.
The terminating null byte is considered part of the string, so that if  c
is  specified  as'\0', these functions return a pointer to the terminator. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*my_s;
	int		len;

	my_s = (char *)(s);
	len = ft_strlen(my_s);
	if ((char)(c) == '\0')
		return (&my_s[len]);
	while (len > 0)
	{
		if (my_s[len] == (char)(c))
			return (&my_s[len]);
		len--;
	}
	if (my_s[len] == (char)(c))
		return (my_s);
	return (0);
}
