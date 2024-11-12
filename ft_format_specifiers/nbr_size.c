#include "libftprintf.h"
#include "../libft_src/libft.h"

int nbr_size(int a)
{
	int size;

	size = 0;
	while(a / 10 > 0)
	{
		a = a / 10;
		size++;
	}
	return (size + 1);
}