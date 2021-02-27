/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:46:32 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 09:31:11 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_str_contains(char const *in, char what)
{
	int i;

	i = 0;
	while (in[i] != 0)
		if (in[i++] == what)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		copy_from;
	int		copy_to;
	int		i;
	char	*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	copy_from = 0;
	copy_to = ft_strlen(s1);
	while (ft_str_contains(set, s1[copy_from]))
		copy_from++;
	while (ft_str_contains(set, s1[copy_to - 1]) && copy_from < copy_to)
		copy_to--;
	if (!(res = (char *)malloc((copy_to - copy_from + 1) * sizeof(char))))
		return (0);
	while (copy_from < copy_to)
		res[i++] = s1[copy_from++];
	res[i] = 0;
	return (res);
}
