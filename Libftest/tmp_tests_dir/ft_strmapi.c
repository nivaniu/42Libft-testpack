/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:53:36 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:15:56 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!f || !s)
		return (0);
	if (!(res = ft_strdup(s)))
		return (0);
	i = -1;
	while (res[++i])
	{
		res[i] = f(i, res[i]);
	}
	return (res);
}
