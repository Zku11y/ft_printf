#include "libftprintf.h"
#include "../libft_src/libft.h"

static char *rev_str(char *str)
{
    int i;
    int len;
    char *str_tmp;

    i = 0;
    len = ft_strlen(str) - 1;
    str_tmp = malloc(len + 1);
    if(str_tmp == NULL)
        return (NULL);
    while(str[i])
        str_tmp[i++] = str[len--];
    str_tmp[i] = '\0';
    return (str_tmp);
}

int handle_x(va_list args, const char **content)
{
    int size;
    char *hex;
    char str[20];
    unsigned int nbr;

    size = 0;
    nbr = va_arg(args, unsigned int);
    if(**content == 'x')
        hex = ft_strdup("0123456789abcdef");
    else
        hex = ft_strdup("0123456789ABCDEF");
    while(nbr > 0)
    {
        str[size] = hex[nbr % 16];
        nbr = nbr / 16;
        size++;
    }
    str[size] = '\0';
    ft_putstr_fd(rev_str(str), 1);
    *(content) = *(content) + 1;
    return (size);
}
