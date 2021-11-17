#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*str;

	if (s == NULL)
		return ((char *) s);
	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (str);
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
