#include "ft_format_specifiers/ft_printf.h"
#include "libft_src/libft.h"

int	perc_flags(va_list args, const char **content)
{
	// bonus flags check function :)
	*(content) = *(content) + 1;
	if (**content == 'c')
		return (handle_c(args, content)); // c handle function
	else if (**content == 's')
		return (handle_s(args, content)); // s handle function
	else if (**content == '%')
		return (handle_perc(args, content)); // % handle function
	else if (**content == 'i' || **content == 'd')
		return (handle_id(args, content)); // i handle function
	else if (**content == 'u')
		return (handle_u(args, content)); // u handle function
	else if (**content == 'x' || **content == 'X')
		return (handle_x(args, content)); // x handle function
	else if (**content == 'p')
		return (handle_p(args, content)); // p handle function
	return (0);
}

int	ft_printf(const char *content, ...)
{
	va_list	args;
	int		size;

	size = 0;
	if(write(1, "", 0) == -1)
		return (-1);
	va_start(args, content);
	while (*content)
	{
		if (*content == '%')
			size += perc_flags(args, &content); // function to handle %
		else
		{
			write(1, content, 1);
			content++;
			size++;
		}
	}
	va_end(args);
	return (size);
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
// 	int a = 4561;
// 	void *ptr = NULL;
//     printf("%d\n", printf("%d\n", a));
//     ft_printf("%d\n", ft_printf("%d\n", a));
// }