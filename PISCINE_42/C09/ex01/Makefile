SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_putstr.c

NAME = libft.a

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS	= -Wall -Wextra -Werror

INCLUDES = includes/ft.h

RM =	rm -f

all	: $(NAME)

$(NAME)	: $(OBJS)
				ar rcs $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -I includes -c $< -o ${<:.c=.o}

clean :
				$(RM) $(OBJS)

fclean :	clean
				$(RM) $(NAME)

re	: fclean all

.PHONY	:	all clean fclean re bonus
