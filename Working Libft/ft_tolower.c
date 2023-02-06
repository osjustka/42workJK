/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:52:28 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:37:48 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_tolower() - converts the letter c to lower case, if possible.
Return Value: The value returned is that of the converted letter, or c if 
the conversion was not possible.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	else if (c > 96 && c < 123)
		return (c);
	else
		return (c);
}
