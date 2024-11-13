#include "libftprintf.h"
#include "../libft_src/libft.h"

int nbr_size(int a)
{
	int size;
	int sign;
	long nbr;

	size = 0;
	sign = 0;
	nbr = a;
	if(nbr < 0)
	{
		sign = 1;
		nbr = nbr * -1;
	}
	while(nbr / 10 > 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return ((size + 1) + sign);
}


// int nbr_size(int a)
// {
// 	int size;
// 	int sign;

// 	size = 0;
// 	sign = 0;
// 	if(a < 0)
// 		sign = 1;
// 	while(a / 10 > 0)
// 	{
// 		a = a / 10;
// 		size++;
// 	}
// 	return ((size + 1) + sign);
// }