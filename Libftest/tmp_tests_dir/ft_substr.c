/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:08:43 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:16:21 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_size_to_alloc(char const *s, int len)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (i < len)
		return (i + 1);
	else
		return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char			*ret;
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	if (!(ret = (char *)malloc(ft_size_to_alloc(s, len) * sizeof(char))))
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
	{
		ret[i] = 0;
		return (ret);
	}
	while (s[start] && len-- > 0)
		ret[i++] = s[start++];
	ret[i] = 0;
	return (ret);
}
