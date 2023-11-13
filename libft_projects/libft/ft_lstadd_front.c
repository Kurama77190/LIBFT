/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samy <samy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:06:54 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/13 23:21:24 by samy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main ()
// {
// 	char *c = "nn";
// 	char *d = "ouiii";
// 	char *e = "NTM";
// 	char *f = "GG";
// 	t_list *lst;
// 	lst = malloc(sizeof(t_list));
// 	t_list *new;
// 	new = malloc(sizeof(t_list));
// 	new->content = f;

// 	lst->content = c;
// 	lst->next = ft_lstnew(d);
// 	lst->next->next = ft_lstnew(e);
// 	printf("%s\n",(char *)lst->content);
// 	printf("%s\n",(char *)lst->next->content);
// 	printf("%s\n",(char *)lst->next->next->content);
// 	printf("\n");
// 	printf("\n");
// 	ft_lstadd_front(&lst, new);
// 	printf("%s\n",(char *)lst->content);
// 	printf("%s\n",(char *)lst->next->content);
// 	printf("%s\n",(char *)lst->next->next->content);
// 	printf("%s\n",(char *)lst->next->next->next->content);
// }