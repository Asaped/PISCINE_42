SRCS = read_file.c

OBJS = $(SRCS:.c=.o)

NAME = ft_display_file

CC	 = gcc

CFLAGS = -Wall -Wextra -Werror

RM	 = rm -rf

all	: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re	: fclean all

.PHONY : all fclean clean re
