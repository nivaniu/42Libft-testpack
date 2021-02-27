/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:43:30 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:05:09 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	return ((c > 8 && 14 > c) || c == 32);
}

int		ft_isoutoflong(char *c, int sign)
{
	int	i;

	if (!ft_isalnum(*c))
		return (0);
	i = 0;
	while (ft_isalnum(c[i]))
		i++;
	if (i < 19)
		return (0);
	if (sign == 1)
		if (ft_strncmp(c, "9223372036854775807", i) > 0)
			return (2);
	if (ft_strncmp(c, "9223372036854775808", i) > 0)
		return (1);
	return (0);
}

int		ft_atoi(char *nptr)
{
	short int		sign;
	unsigned long	result;

	result = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-' && ++nptr)
		sign = -1;
	else if (*nptr == '+')
		++nptr;
	if (ft_isoutoflong(nptr, sign) == 1)
		return (0);
	if (ft_isoutoflong(nptr, sign) == 2)
		return (-1);
	while ('0' <= *nptr && *nptr <= '9')
		result = result * 10UL + ((unsigned long)*nptr++ - 48UL);
	return ((int)result * sign);
}
