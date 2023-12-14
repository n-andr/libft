/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:44:02 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/12 19:44:13 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int main() 
{
    t_list *node1 = ft_lstnew("1");
    t_list *node2 = ft_lstnew("2");
    t_list *node3 = ft_lstnew("3");
	t_list	*new = ft_lstnew("0");

    node1->next = node2;
    node2->next = node3;
	while (node1)
	{
		printf("%s\n", (char *)node1->content);
		node1 = node1->next;
	}
	ft_lstadd_front(&node1, new);
	while (node1)
	{
		printf("%s\n", (char *)node1->content);
		node1 = node1->next;
	}
}*/
