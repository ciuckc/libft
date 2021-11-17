#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int			i;
	t_list		*temp;

	temp = lst;
	i = ft_lstsize(lst);
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	return (temp);
}
