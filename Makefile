SRC = ft_printf.c libft_src/ft_strlen.c \
	handle_print.c libft_src/ft_putnbr_fd.c nbr_size.c \
	handle_hex.c putnbr.c libft_src/ft_strlcpy.c \
	libft_src/ft_putstr_fd.c handle_dec.c \
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