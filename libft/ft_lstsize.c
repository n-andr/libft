#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/*#include <stdio.h>
int main() 
{
    t_list *node1 = ft_lstnew("1");
    t_list *node2 = ft_lstnew("2");
    t_list *node3 = ft_lstnew("3");
	t_list *new = ft_lstnew("0");

    node1->next = node2;
    node2->next = node3;
    
    // Print the list before adding a new element
    t_list *current = node1;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    
    // Add a new element to the front
    ft_lstadd_front(&node1, new);

    // Print the list after adding a new element
    current = node1;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

	printf("list len: %d\n", ft_lstsize(node1));
	
    // Free the memory
    //ft_lstclear(&node1, free);

    return 0;
}*/