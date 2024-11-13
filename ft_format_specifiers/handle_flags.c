#include "libftprintf.h"
#include "../libft_src/libft.h"

int handle_flags(va_list args, const char **content)
{
	int size;
	int nbr;

	size = 0;
	nbr = va_arg(args, int);
	if(**content == '#' && (*(*content + 1) == 'x' || *(*content + 1) == 'X'))
	{
		if(*(*content + 1) == 'x')
			write(1, &"0x", 2);
		else if(*(*content + 1) == 'X')
			write(1, &"0X", 2);
		size = 2;
	}
	else if(**content == ' ' && (*(*content + 1) == 'd' || *(*content + 1) == 'i'))
	{
		if(nbr > 0)
			write(1, &" ", 1);
		size = 1;
	}
	*(content) = *(content) + 1;
	return (size);
}
