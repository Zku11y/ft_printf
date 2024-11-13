#include "libftprintf.h"
#include "../libft_src/libft.h"

void	putnbr(int n)
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
		putnbr(nbr / 10);
	chr = (nbr % 10) + '0';
	write(1, &chr, 1);
}