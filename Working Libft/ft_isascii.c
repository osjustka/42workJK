/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:05:34 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 10:59:38 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int s)
{
	if (s >= 0 && s <= 127)
		return (1);
	else
		return (0);
}/*
isascii() - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
The values returned are nonzero if the character c falls into the tested class, and a zero value if not. 
*/
