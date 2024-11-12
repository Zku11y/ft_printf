#include "libftprintf.h"
#include "../../my_git/libft.h"

void handle_id(va_list args, const char **content)
{
	int a;

	a = va_arg(args, int);
	ft_putnbr_fd(a, 1);
	*(content) = *(content) + 1;
}