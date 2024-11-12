#include "ft_format_specifiers/libftprintf.h"
#include "../my_git/libft.h"

void perc_flags(va_list args, const char **content)
{
    // bonus flags check function :)
	*(content) = *(content) + 1;
	if(**content == 'c')
		handle_c(args, content);  // c handle function
	else if(**content == 's')
		handle_s(args, content);// s handle function
	else if(**content == '%')
		handle_perc(args, content);// % handle function
	else if(**content == 'i' || **content == 'd')
		handle_id(args, content);	// i handle function
	else if(**content == 'u')
		handle_u(args, content);// u handle function
	// else if(**content == 'p')
	// 	// p handle function
	// else if(**content == 'x')
	// 	// x handle function
	// else(**content == 'X')
	// 	// X handle function
}

int ft_printf(const char *content, ...)
{
    va_list args;
	int size;

	size = ft_strlen(content);
    va_start(args, content);
    while(*content)
    {
        if(*content == '%')
            perc_flags(args, &content);                // function to handle %
        else
        {
			write(1, content, 1);
			content++;
		}
    }
    va_end(args);
	return (size);
}

#include <stdio.h>
int main()
{
    printf("this string %X \n", 567565);
    ft_printf("this string %u ", -45);
}