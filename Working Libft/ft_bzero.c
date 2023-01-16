/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:06:15 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/11 10:37:16 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
    unsigned char	*clean;
	suze_t	i;

	clean = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		clean[i] = '\0';
		i++;
	}    
}