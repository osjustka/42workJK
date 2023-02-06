/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:45:15 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:32:35 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strncmp() - function is similar to strcmp() function, except it
compares  only  the  first (at most) n bytes of s1 and s2. Function returns
an integer indicating the result of the comparison, as follows:
0, if the s1 and s2 are equal; a negative value if s1 is less than s2;
a positive value if s1 is greater than s2. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*my_s1;
	char	*my_s2;

	my_s1 = (char *)(s1);
	my_s2 = (char *)(s2);
	i = 0;
	if (n > 0)
	{
		while ((my_s1[i] == my_s2[i]) && \
		((my_s1[i] != '\0') || (my_s2[i] != '\0')) && i < n - 1)
		{
			i++;
		}
		return ((unsigned char)(my_s1[i]) - (unsigned char)(my_s2[i]));
	}
	return (0);
}
