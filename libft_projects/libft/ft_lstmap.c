/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:06:07 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:06:09 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		ft_lstadd_back(&new_list, ft_lstnew((*f)(lst->content)));
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
