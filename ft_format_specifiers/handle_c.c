#include "libftprintf.h"
#include "../../my_git/libft.h"

void handle_c(va_list args, const char **content)
{
	char a;

	a = (char)va_arg(args, int);
	write(1, &a, 1);
	*(content) = *(content) + 1;
}