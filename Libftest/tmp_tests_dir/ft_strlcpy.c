/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:04:12 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:21:54 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dst, const char *src, int dstsize)
{
	char		*d;
	const char	*s;
	int			n;
	int			u;

	d = dst;
	s = src;
	n = dstsize;
	if (!dst || !src)
		return (0);
	if (n != 0)
		while (--n != 0)
			if ((*d++ = *s++) == '\0')
				break ;
	if (n == 0)
	{
		if (dstsize != 0)
			*d = '\0';
		while (*s++)
			u = 0;
	}
	return (s - src - 1);
}
