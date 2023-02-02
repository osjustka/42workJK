/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:03:48 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 10:59:24 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int s)
{
	if ((s > 64 && s < 91) || ((s > 96 && s < 123)))
		return (1);
	else
		return (0);
}/*
isalpha() - checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).*/
