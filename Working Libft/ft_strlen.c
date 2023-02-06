/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:14:27 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:31:03 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strlen() - function calculates the length of the string pointed to by s,
excluding the terminating null byte ('\0'). RETURN VALUE: function returns
the number of bytes in the string pointed to by s. */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;
	char	*my_s;

	len = 0;
	my_s = (char *)(s);
	while (*my_s++ != '\0')
	{
		len++;
	}
	return (len);
}
