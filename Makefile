CC = CC

CFLAGS  = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_puthex.c ft_putptr.c ft_un_putnbr.c ft_format.c \
		ft_putchar.c ft_putnbr.c ft_putstr.c  

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all