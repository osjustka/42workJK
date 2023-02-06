/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:05:06 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 10:59:05 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isalnum() - checks for an alphanumeric character;
it is equivalent to (isalpha(c) || isdigit(c)).
Return Value: The values returned are nonzero if the character c falls
into the tested class, and a zero value if not. */

#include "libft.h"

int	ft_isalnum(int s)
{
	if ((s > 64 && s < 91) || (s > 96 && s < 123) || (s > 47 && s < 58))
		return (1);
	else
		return (0);
}
