SRC = ft_printf.c ft_format_specifiers/handle_c.c \
	ft_format_specifiers/handle_perc.c ft_format_specifiers/handle_id.c \
	ft_format_specifiers/handle_u.c  libft_src/ft_strlen.c \
	ft_format_specifiers/handle_s.c libft_src/ft_putnbr_fd.c ft_format_specifiers/nbr_size.c \
	ft_format_specifiers/handle_x.c ft_format_specifiers/putnbr.c libft_src/ft_strdup.c \
	libft_src/ft_putstr_fd.c ft_format_specifiers/handle_p.c \
	libft_src/ft_strchr.c


NAME = libftprintf.a
OBJS = $(SRC:.c=.o);
CC = cc
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean