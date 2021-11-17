#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy_s1;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	cpy_s1 = (char *)malloc(len_s1 + 1);
	if (cpy_s1 == NULL)
		return (cpy_s1);
	ft_strlcpy(cpy_s1, s1, len_s1 + 1);
	return (cpy_s1);
}
