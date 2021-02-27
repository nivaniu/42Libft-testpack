/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 14:29:49 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 11:06:28 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	unsigned char		*r;
	unsigned char		*s;

	if (dest == src)
		return (dest);
	s = (unsigned char*)src;
	r = (unsigned char*)dest;
	while (n > 0)
	{
		n -= 1;
		*r++ = *s++;
	}
	return (dest);
}
