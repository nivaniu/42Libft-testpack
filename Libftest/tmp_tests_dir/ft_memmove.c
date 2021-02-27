/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:00:47 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:06:46 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	char *tmp;

	if (!dst && !src)
		return (dst);
	tmp = (char*)malloc(len * sizeof(char));
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, len);
		dst = ft_memcpy(dst, tmp, len);
	}
	free(tmp);
	return (dst);
}
