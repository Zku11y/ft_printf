#include "libftprintf.h"
#include "../libft_src/libft.h"

static int handle_flag(int nbr, const char **content)
{
	int size;

	size = 0;
	if((**content == ' ' || **content == '+') && (*(*content + 1) == 'd' || *(*content + 1) == 'i'))
	{
		if(nbr > 0 && **content == ' ')
			write(1, &" ", 1);
		else if(nbr > 0 && **content == '+')
			write(1, &"+", 1);
		size = 1;
		*(content) = *(content) + 1;
	}
	return (size);
}

int handle_id(va_list args, const char **content)
{
	int a;
	int size_flag;

	a = va_arg(args, int);
	size_flag = handle_flag(a, content);
	putnbr(a);
	*(content) = *(content) + 1;
	return(nbr_size(a) + size_flag);
}

