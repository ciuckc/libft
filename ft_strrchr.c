#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occ;

	last_occ = NULL;
	while (*str)
	{
		if (*str == (char) c)
			last_occ = str;
		str++;
	}
	if (*str == '\0' && (char) c == '\0')
	{
		last_occ = str;
		return ((char *) last_occ);
	}
	return ((char *) last_occ);
}
