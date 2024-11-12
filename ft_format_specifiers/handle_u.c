#include "libftprintf.h"
#include "../libft_src/libft.h"
#include <stdio.h>

int nbr_u_size(unsigned int a)
{
	int size;

	size = 0;
	while(a / 10 > 0)
	{
		a = a / 10;
		size++;
	}
	return (size + 1);
}

void	putnbr_u(unsigned int n)
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
		putnbr_u(nbr / 10);
	chr = (nbr % 10) + '0';
	write(1, &chr, 1);
}

int handle_u(va_list args, const char **content)
{
	unsigned int a;

	a = va_arg(args, unsigned int);
	putnbr_u(a);
	*(content) = *(content) + 1;
	return(nbr_u_size(a));
}