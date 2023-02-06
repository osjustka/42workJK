/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:03:53 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:19:32 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_split - allocates (with malloc(3)) and returns an array of strings
obtained by splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer. Return value: The array of new strings
resulting from the split. NULL if the allocation fails.*/

#include "libft.h"

static int	ft_count(const char *my_s, char c)
{
	int	i;
	int	count;

	if (my_s == 0 || my_s[0] == 0)
		return (0);
	i = 1;
	count = 0;
	if (my_s[0] != c)
		count++;
	while (my_s[i] != '\0')
	{
		if (my_s[i] != c && my_s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_next_count(const char *my_s, char c, int i)
{
	int	count;

	count = 0;
	while (my_s[i] == c && my_s[i] != '\0')
		i++;
	while (my_s[i] != '\0' && my_s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	**ft_malloc(const char *my_s, char c)
{
	int		len;
	char	**arr_s;

	len = ft_count(my_s, c);
	arr_s = malloc(sizeof(*arr_s) * (len + 1));
	if (arr_s == 0)
		return (0);
	return (arr_s);
}

static char	**ft_free(char **arr_s, int i)
{
	int	j;

	j = 0;
	while (j < i && arr_s[i] != 0)
	{
		free(arr_s[j]);
		j++;
	}
	free(arr_s);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_s;
	int		i;
	int		j;
	int		si;

	si = 0;
	i = -1;
	arr_s = ft_malloc(s, c);
	if (arr_s == NULL || s == NULL)
		return (NULL);
	while (++i < ft_count(s, c))
	{
		j = 0;
		arr_s[i] = malloc(ft_next_count(s, c, si) + 1);
		if (arr_s[i] == 0)
			return (ft_free(arr_s, i));
		while (s[si] != '\0' && s[si] == c)
			si++;
		while (s[si] != '\0' && s[si] != c)
			arr_s[i][j++] = s[si++];
		arr_s[i][j] = '\0';
	}
	arr_s[i] = 0;
	return (arr_s);
}
