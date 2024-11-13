#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


void	putnbr(int n);
int     nbr_size(int a);
int     ft_printf(const char *num, ...);
int     handle_c(va_list args, const char **content);
int     handle_s(va_list args, const char **content);
int     handle_u(va_list args, const char **content);
int     handle_x(va_list args, const char **content);
int     handle_p(va_list args, const char **content);
int     handle_id(va_list args, const char **content);
int     handle_perc(va_list args, const char **content);
int 	handle_flags(va_list args, const char **content);
#endif