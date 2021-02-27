/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 07:56:01 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 08:16:56 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
	void	*res;

	if (!(res = (void *)malloc(count * size)))
		return (0);
	ft_bzero(res, count * size);
	return (res);
}
