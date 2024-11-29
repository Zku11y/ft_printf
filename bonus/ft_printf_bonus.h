/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:40:48 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/28 12:04:06 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>

typedef struct flag_struct
{
	int tag;
	int space;
	int plus;
}	flags;

void	putnbr(int n);
int		nbr_size(int a);
int		ft_printf(const char *num, ...);
flags 	flag_check(const char **content, flags flag);
int		handle_c(va_list args, const char **content);
int		handle_s(va_list args, const char **content);
int		handle_u(va_list args, const char **content);
int		handle_x(va_list args, const char **content, flags flags);
int		handle_p(va_list args, const char **content);
int		handle_id(va_list args, const char **content, flags flags);
int		handle_perc(const char **content);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
#endif