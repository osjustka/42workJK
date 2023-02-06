/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:04:40 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 10:59:55 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sdigit() - checks for a digit (0 through 9). */

#include "libft.h"

int	ft_isdigit(int s)
{
	if (s > 47 && s < 58)
		return (1);
	else
		return (0);
}
