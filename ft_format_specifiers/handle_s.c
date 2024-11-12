#include "libftprintf.h"
#include "../../my_git/libft.h"

void handle_s(va_list args, const char **content)
{
	char *str;

	str = va_arg(args, char *);
	write(1, str, ft_strlen(str));
	*(content) = *(content) + 1;
}