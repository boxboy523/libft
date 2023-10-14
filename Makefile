CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rsc
SRC_DIR = .
INC = -I./ 
NAME = libft.a
SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_strchr.c ft_split.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
		ft_strdup.c ft_striteri.c ft_strjoin.c\
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c\
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
		ft_tolower.c ft_toupper.c
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