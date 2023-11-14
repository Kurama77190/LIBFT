/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:05:35 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:05:37 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmpdel;
	t_list	*backup;

	tmpdel = *lst;
	if (!lst || !*lst)
		return ;
	while (tmpdel != NULL)
	{
		(*del)(tmpdel->content);
		backup = tmpdel->next;
		free(tmpdel);
		tmpdel = backup;
	}
	*lst = NULL;
}
