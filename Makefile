SRC = ft_printf.c ft_strlen.c \
	handle_print.c ft_putnbr_fd.c nbr_size.c \
	handle_hex.c putnbr.c ft_strlcpy.c \
	ft_putstr_fd.c handle_dec.c \
	ft_strchr.c


NAME = libftprintf.a
OBJS = $(SRC:.c=.o);
CC = cc
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean