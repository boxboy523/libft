CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rsc
SRC_DIR = ./
INC = -I./ 
NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(SRCS:.c=.o)

OBJS_PATH = $(patsubst %.o, $(SRC_DIR)/%.o, $(OBJS))
all: $(OBJS_PATH) $(NAME)
$(NAME) : $(OBJS_PATH)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_PATH)
$(OBJS_PATH): %.o: %.c libft.h
	$(CC) $(CFLAGS) $(INC) -c $< -o $@ 
.PHONY: clean fclean re all
clean:
	rm -f $(OBJS_PATH)
fclean:
	rm -f $(OBJS_PATH) libft.a
re: fclean all