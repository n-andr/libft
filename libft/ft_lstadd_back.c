#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = new;
}

/* #include <stdio.h>
int main ()
{
    t_list *node1 = ft_lstnew("1");
    t_list *node2 = ft_lstnew("2");
    t_list *node3 = ft_lstnew("3");
	t_list	*new = ft_lstnew("0");
	t_list	*copy = node1;


    node1->next = node2;
    node2->next = node3;
	while (node1)
	{
		printf("%s\n", (char *)node1->content);
		node1 = node1->next;
	}
	ft_lstadd_back(&copy, new);
	while (copy)
	{
		printf("%s\n", (char *)copy->content);
		copy = copy->next;
	}

} */
