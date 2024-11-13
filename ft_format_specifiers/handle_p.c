#include "libftprintf.h"
#include "../libft_src/libft.h"


char *rev_str(char *str)
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

int long_to_hex(unsigned long nbr)
{
    int size;
    char *hex;
    char str[20];

    size = 0;
    if(nbr == 0)
    {
        ft_putstr_fd("0x0", 1);
        return(3);    
    }
    hex = ft_strdup("0123456789abcdef");
    while(nbr > 0)
    {
        str[size] = hex[nbr % 16];
        nbr = nbr / 16;
        size++;
    }
    str[size] = '\0';
    ft_putstr_fd("0x", 1);
    ft_putstr_fd(rev_str(str), 1);
    return (size + 2);
}

int handle_p(va_list args, const char **content)
{
    void *ptr;
    unsigned long nbr;
    int size;
    
    ptr = va_arg(args,void *);// hint : unsigned long in void pointers, addresses are originally unsigned longs
    nbr = (unsigned long)ptr;
    size = long_to_hex(nbr);
    *(content) = *(content) + 1;
    return (size);
}
