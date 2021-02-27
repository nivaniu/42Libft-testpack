/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:23:06 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 09:05:44 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_nbrs(int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	if (i == 0)
		return (1);
	return (i);
}

char	*ft_itoa(int nbr)
{
	char		*tab;
	long int	nb;
	int			i;
	int			size;

	size = ft_nbrs(nbr);
	i = 0;
	if ((nb = nbr) < 0)
	{
		if (!(tab = (char *)malloc(sizeof(char) * (size + 2))))
			return (0);
		tab[i++] = '-';
		nb = -nb;
		size++;
	}
	else if (!(tab = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	tab[size] = '\0';
	while (--size >= i)
	{
		tab[size] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (tab);
}
