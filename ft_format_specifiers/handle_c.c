#include "libftprintf.h"
#include "../libft_src/libft.h"

int handle_c(va_list args, const char **content)
{
	char a;

	a = (char)va_arg(args, int);
	write(1, &a, 1);
	*(content) = *(content) + 1;
	return(1);
}