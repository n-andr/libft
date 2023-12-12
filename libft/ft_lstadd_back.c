#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next)
	{
		(*lst) = (*lst)->next;
	}
	(*lst)->next = new;
}
