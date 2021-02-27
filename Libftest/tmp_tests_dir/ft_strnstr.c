/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:10:41 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/14 12:00:31 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int	a;
	int	b;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while ((haystack[a + b] == needle[b] && len > a + b)
				|| needle[b] == '\0')
			if (needle[b++] == '\0')
				return ((char *)&haystack[a]);
		a++;
	}
	return (0);
}
