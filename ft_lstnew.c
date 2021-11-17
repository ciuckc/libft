#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	void	*value;

	value = content;
	node = ft_calloc(1, sizeof(t_list));
	if (node == NULL)
		return (node);
	node->content = value;
	node->next = NULL;
	return (node);
}
