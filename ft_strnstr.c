#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h1;
	char	*n1;
	size_t	len_n1;

	h1 = (char *) haystack;
	n1 = (char *) needle;
	len_n1 = ft_strlen(needle);
	if (*n1 == 0)
		return (h1);
	while (len >= 1 && *haystack)
	{
		if (len_n1 > len)
			return (NULL);
		if (!ft_strncmp(h1, n1, len_n1))
			return (h1);
		h1++;
		len--;
	}
	return (NULL);
}
