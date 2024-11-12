#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


int ft_printf(const char *num, ...);
void handle_c(va_list args, const char **content);
void handle_s(va_list args, const char **content);
void handle_perc(va_list args, const char **content);
void handle_id(va_list args, const char **content);
void handle_u(va_list args, const char **content);
#endif