#include "libftprintf.h"
#include "../libft_src/libft.h"

int handle_s(va_list args, const char **content)
{
	char *str;
	int size;

	str = va_arg(args, char *);
	size = ft_strlen(str);
	write(1, str, size);
	*(content) = *(content) + 1;
	return (size);
}