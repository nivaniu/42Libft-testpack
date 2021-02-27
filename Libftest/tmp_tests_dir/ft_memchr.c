/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:51:17 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/07 09:17:49 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	int			i;
	const char	*ss;

	ss = s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(ss + i) == (unsigned char)c)
			return (void*)(ss + sizeof(char) * i);
		i++;
	}
	return (0);
}
