#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*vasya;

	vasya = (t_list *)malloc(sizeof(t_list));
	if (vasya == 0)
		return (NULL);
	vasya->content = content;
	vasya->next = NULL;
	return (vasya);
}

/*#include <stdio.h>
int main() 
{
    t_list *node1 = ft_lstnew("One");
	printf("%s\n", (char *)node1->content);
}*/