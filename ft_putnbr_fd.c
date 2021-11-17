#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = (long) n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i *= -1;
	}
	if (i <= 9)
	{
		ft_putchar_fd(i % 10 + '0', fd);
	}
	else if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
}