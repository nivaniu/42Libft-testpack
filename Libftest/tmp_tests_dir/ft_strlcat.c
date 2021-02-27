/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:22:22 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/01/31 13:00:32 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, const char *src, int dstsize)
{
	int		j;
	int		i;
	int		dstlen;
	int		srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	j = 0;
	if (dstsize > 0 && dstlen < dstsize - 1)
	{
		while (src[j] && j + dstlen < dstsize - 1)
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = 0;
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (srclen + dstlen);
}
