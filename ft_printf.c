#include "libftprintf.h"
#include "my_git/libft.h"
#include <string.h>

void perc_flags(va_list args, const char *content)
{
    int a = 3;
    while(a)
    {
        char *x = va_arg(args, char *);
        write(1, x, ft_strlen(x));
        a--;
    }
}

int ft_printf(const char *content, ...)
{
    va_list args;

    va_start(args, content);
    while(*content)
    {
        if(*content == '%')
            perc_flags(args, content);                // function to handle %
        else
            write(1, content, 1);
        content++;
    }
    va_end(args);
}


int main()
{
    ft_printf("this string %   ", "that1 string 1", "that2 string 2", "that3 string 3");
}