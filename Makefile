SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_base.c ft_putstr.c ft_strlen.c p_void.c unsi.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar r $@ $?
%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
re : fclean all