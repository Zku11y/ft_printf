#include "libftprintf.h"
#include "../libft_src/libft.h"

int handle_perc(va_list args, const char **content)
{
	char a;

	a = '%';
	write(1, &a, 1);
	*(content) = *(content) + 1;
	return(1);
}