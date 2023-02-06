/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:41:34 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:38:11 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_toupper() - If c is a lowercase letter, toupper() returns its uppercase
equivalent. RETURN VALUE:   The value returned is that of the converted letter,
or c if the conversion was not possible. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 64 && c < 91)
		return (c);
	else if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}
