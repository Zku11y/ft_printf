#include "libftprintf.h"
#include "../../my_git/libft.h"
#include <stdio.h>

void	putnbr_fd(unsigned int n)
{
	char	chr;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		putnbr_fd(nbr / 10);
	chr = (nbr % 10) + '0';
	write(1, &chr, 1);
}

void handle_u(va_list args, const char **content)
{
	unsigned int a;

	a = va_arg(args, unsigned int);
	putnbr_fd(a);
	*(content) = *(content) + 1;
}