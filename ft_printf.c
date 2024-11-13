#include "ft_format_specifiers/libftprintf.h"
#include "libft_src/libft.h"

int perc_flags(va_list args, const char **content)
{
    // bonus flags check function :)
	int size;
	char str[] = "# +-0.";

	size = 0;
	*(content) = *(content) + 1;
	if(ft_strchr(str, **content))
		size = handle_flags(args, content);
	if(**content == 'c')
		return (handle_c(args, content) + size);  // c handle function
	else if(**content == 's')
		return (handle_s(args, content) + size);// s handle function
	else if(**content == '%')
		return (handle_perc(args, content) + size);// % handle function
	else if(**content == 'i' || **content == 'd')
		return (handle_id(args, content) + size);	// i handle function
	else if(**content == 'u')
		return (handle_u(args, content) + size);// u handle function
	else if(**content == 'x' || **content == 'X')
		return (handle_x(args, content) + size); 	// x handle function
	else if(**content == 'p')
		return (handle_p(args, content) + size);	// p handle function
	return(0);
}

int ft_printf(const char *content, ...)
{
    va_list args;
	int size;

	size = 0;
    va_start(args, content);
    while(*content)
    {
        if(*content == '%')
            size += perc_flags(args, &content);                // function to handle %
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

#include <stdio.h>
int main()
{
	int a = 4563;
	void *ptr = NULL;
    printf("%d\n", printf("this string %#x \n", a));
    ft_printf("%d\n", ft_printf("this string %#x \n", a));
}