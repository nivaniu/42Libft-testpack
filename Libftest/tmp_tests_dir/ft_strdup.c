/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:28:31 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/01/30 10:58:21 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_len(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strdup(const char *s)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = (char *)malloc((ft_len(s) + 1) * sizeof(char))))
		return (0);
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
