/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 11:21:08 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/01/31 13:00:45 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*todel;

	if (!lst || !del || !*lst)
		return ;
	while (lst && *lst)
	{
		todel = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = todel;
	}
}
