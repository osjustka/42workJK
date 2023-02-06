/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:21:22 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:31:48 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strmapi() - function applies the function ’f’ to each character of
the string ’s’, and passing its index as first argument to create
a new string (with malloc(3)) resulting from successive applications of ’f’.
Return value: The string created from the successive applications of ’f’.
Returns NULL if the allocation fails. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*my_s;
	int				len;
	char			*arr_s;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (0);
	my_s = (char *)(s);
	i = 0;
	len = ft_strlen(my_s);
	arr_s = malloc(sizeof(char) * (len + 1));
	if (arr_s == NULL)
		return (0);
	arr_s[len] = '\0';
	while (my_s[i] != '\0')
	{
		arr_s[i] = f(i, my_s[i]);
		i++;
	}
	return (arr_s);
}
