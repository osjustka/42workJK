/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:22:56 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/13 12:41:48 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *my_s1;
	char *my_set;
	size_t set_len;
	char *my_s1_len;
	size_t i;
	size_t i;
	size_t cut_front;
	size_t cut_back;
	char *new_str;
	char *trm_str;

	my_s1 = (char *)(s1);
	my_set = (char *)(set);
	set_len = (size_t)(ft_strlen(set));
	my_s1_len = (size_t)(ft_strlen(my_s1));
	cut_front = 0;
	cut_back = 0;
	j = 0;
	while (j < set_len)
	{
		if (my_s1[0 + cut_front] == my_set[j] && my_s1[0 + cut_front] != '\0')
		{
			cut_front += 1;
			j = 0;
		}
		j++;
	}
	j = 0;
	while (j < set_len)
	{
		if (my_s1[my_s1_len - 1 - cut_back] == my_set[j] && my_s1[my_s1_len - 1
			- cut_back] != '\0')
		{
			cut_back -= 1;
			j = 0;
		}
		j++;
	}
	i = cut_front;
	j = 0;
	while (i < cut_back - 1)
	{
		trm_str[j] = new_str[i];
		j++;
	}
	return (trm_str);
}