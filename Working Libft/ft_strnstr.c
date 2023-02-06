/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:59:54 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:33:20 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strnstr()- function locates the first occurrence of the null-termi‐nated
string little in the string big, where not more than len characters
are searched.  Characters that appear after a ‘\0’ character are not searched.
RETURN VALUES: If little is an empty string, big is returned; if little occurs
nowhere in big, NULL is returned; otherwise a pointer to the first character
of the first occurrence of little is returned. */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*my_big;
	char	*my_little;

	if ((big == NULL || little == NULL) && len == 0)
		return (0);
	my_big = (char *)(big);
	my_little = (char *)(little);
	i = 0;
	if (my_little[0] == '\0')
		return (my_big);
	while (my_big[i] != '\0' && i < len)
	{
		j = 0;
		while (my_big[i + j] == my_little[j] && i + j < len \
		&& my_little[j] != '\0' && my_big[i + j] != '\0')
		{
			j++;
		}
		if (my_little[j] == '\0')
			return (&my_big[i]);
		i++;
	}
	return (0);
}
