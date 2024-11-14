SRC = ft_printf.c libft_src/ft_strlen.c \
	ft_format_specifiers/handle_print.c libft_src/ft_putnbr_fd.c ft_format_specifiers/nbr_size.c \
	ft_format_specifiers/handle_hex.c ft_format_specifiers/putnbr.c libft_src/ft_strlcpy.c \
	libft_src/ft_putstr_fd.c ft_format_specifiers/handle_dec.c \
	libft_src/ft_strchr.c


NAME = libftprintf.a
OBJS = $(SRC:.c=.o);
CC = cc
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

main:	# this is for testing only! must remove l8r
	@$(CC) $(FLAGS) main.c $(NAME)
	@./a.out

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean