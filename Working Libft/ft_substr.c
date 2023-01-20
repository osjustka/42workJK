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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *my_s;
	char *my_string;
	unsigned int i;

	if (s == 0)
		return (0);
	my_s = (char *)(s);
	if (start >= (unsigned int)(ft_strlen(my_s)))
	{
		if (!(my_string = (char *)malloc(sizeof(char))))
			return (0);
		my_string[0] = 0;
		return (my_string);
	}
	my_string = (char *)malloc(sizeof(my_s[start]) * (len + 1));
	if (my_string == NULL)
		return (0);
	while (my_s[i] != '\0' && i < len)
	{
		my_string[i] = my_s[i + start];
		i++;
	}
	my_string[i] = '\0';
	return (my_string);
}