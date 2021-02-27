/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivaniuk <nivaniuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:39:30 by nivaniuk          #+#    #+#             */
/*   Updated: 2021/02/27 08:10:36 by nivaniuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *list;

	if (!(list = (t_list *)malloc(sizeof(t_list *))))
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}
