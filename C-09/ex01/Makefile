SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
	srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDES = ./includes
NAME = libft.a
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
%.o: %.c
	cc $(CFLAGS) -c $< -o $@ -I$(INCLUDES)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re
