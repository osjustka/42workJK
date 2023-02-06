/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:48:49 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:36:04 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_substr() - allocates (with malloc(3)) and returns a substring from
the string ’s’. The substring begins at index ’start’ and is of maximum
size ’len’. Return value: The substring. NULL if the allocation fail*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*my_s;
	char	*my_string;

	if (s == 0)
		return (0);
	my_s = (char *)(s);
	if (start > (unsigned int)(ft_strlen(my_s)))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	my_string = (char *)malloc(sizeof(char) * (len + 1));
	if (my_string == NULL)
		return (0);
	i = 0;
	while (my_s[i] != '\0' && i < len)
	{
		my_string[i] = my_s[i + start];
		i++;
	}
	my_string[i] = '\0';
	return (my_string);
}
