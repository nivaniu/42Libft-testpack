/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:03:54 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:06:12 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	int				i;

	i = 0;
	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	while (i < n)
	{
		if ((unsigned char)c1[i] != (unsigned char)c2[i])
			return ((unsigned char)c1[i] - (unsigned char)c2[i]);
		i++;
	}
	return (0);
}
