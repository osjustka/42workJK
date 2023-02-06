/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:31:16 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:20:37 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strdup() - function  returns a pointer to a new string which is
a duplicate of the string s.  Memory for the new string is obtained with
malloc(3), and can be freed with free(3). Return value: On success,
the strdup() function returns a pointer to the duplicated string.
It returns NULL if insufficient memory was available. */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*my_string;
	char	*my_s;
	int		len;
	int		i;

	my_s = (char *)(s);
	i = 0;
	len = ft_strlen(my_s);
	my_string = (char *)malloc(sizeof(char) * (len + 1));
	if (my_string == NULL)
		return (0);
	i = 0;
	while (my_s[i] != '\0')
	{
		my_string[i] = my_s[i];
		i++;
	}
	my_string[i] = '\0';
	return (my_string);
}
