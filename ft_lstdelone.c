#include "libft.h"

void	ft_lstdelone(t_list *list, void (*del)(void *))
{
	(*del)(list->content);
	free(list);
}
