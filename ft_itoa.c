#include "libft.h"

static size_t	ft_count_digits(long i)
{
	int		digits;

	digits = 0;
	if (i <= 0)
	{
		i *= -1;
		digits++;
	}
	while (i != 0)
	{
		i = i / 10;
		digits++;
	}
	return (digits);
}

static void	ft_putnbr(long i, char **str)
{
	if (i < 0)
	{
		**str = '-';
		i *= -1;
		(*str)++;
	}
	if (i / 10 != 0)
		ft_putnbr(i / 10, str);
	**str = i % 10 + '0';
	(*str)++;
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	long	i;

	i = (long) n;
	len = ft_count_digits(i);
	str = (char *)ft_calloc(1, len + 1);
	if (str == NULL)
		return (str);
	ft_putnbr(i, &str);
	return (str - len);
}
