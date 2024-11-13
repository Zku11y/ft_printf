#include "libftprintf.h"
#include "../libft_src/libft.h"
#include <stdio.h>

int handle_id(va_list args, const char **content)
{
	int a;

	a = va_arg(args, int);
	putnbr(a);
	*(content) = *(content) + 1;
	return(nbr_size(a));
}

