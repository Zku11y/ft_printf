#include "libftprintf.h"
#include "../../my_git/libft.h"

void handle_perc(va_list args, const char **content)
{
	char a;

	a = '%';
	write(1, &a, 1);
	*(content) = *(content) + 1;
}