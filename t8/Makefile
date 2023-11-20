CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = cr
RM = rm -f
NAME = libftprintf.a

SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
