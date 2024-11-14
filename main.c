#include <stdio.h>
#include "ft_format_specifiers/ft_printf.h"

int main()
{
	void *a;
	int b = 5;
	a = &b;
    ft_printf("%d\n", ft_printf("%p\n", a));  // Passing NULL pointer directly
    printf("%d\n", printf("%p\n", a));  // Passing NULL pointer directly
    //printf("%d\n", printf("%p", ""));  // Passing NULL pointer directly
}