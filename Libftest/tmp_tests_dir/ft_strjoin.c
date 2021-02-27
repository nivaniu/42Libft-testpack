/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:33:43 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:15:33 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		i2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(res = (char *)malloc((ft_strlen(s1)
	+ ft_strlen(s2) + 1) * sizeof(char))))
		return (0);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	i2 = 0;
	while (s2[i2])
	{
		res[i] = s2[i2];
		i++;
		i2++;
	}
	res[i] = 0;
	return (res);
}
