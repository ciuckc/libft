#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	char		*d1;
	const char	*s1;
	size_t		len_s;
	size_t		i;

	len_s = ft_strlen(src);
	d1 = dest;
	s1 = src;
	i = 0;
	if (dstsize == 0)
		return (len_s);
	while (i < dstsize - 1 && s1[i] != 0 )
	{
		d1[i] = s1[i];
		i++;
	}
	d1[i] = 0;
	return (len_s);
}
