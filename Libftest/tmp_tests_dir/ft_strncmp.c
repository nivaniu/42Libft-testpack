/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:59:41 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/07 09:29:06 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *c1, const char *c2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c1[i] != (unsigned char)c2[i])
			return ((unsigned char)c1[i] - (unsigned char)c2[i]);
		if ((unsigned char)c1[i] == 0 && (unsigned char)c2[i] == 0)
			return (0);
		i++;
	}
	return (0);
}
