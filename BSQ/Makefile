# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 23:31:32 by rboudwin          #+#    #+#              #
#    Updated: 2023/07/19 23:34:55 by rboudwin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.c ft_atoi_error.c ft_strchr.c read.c write.c make_structs.c\
		  validate_maps.c find_solution.c choose_answer.c
CFLAGS = -Wall -Wextra -Werror 
HEADERS = bsq.h
OBJECTS = $(SOURCES:.c=.o)
EXEC = bsq
NAME = bsq
all : $(EXEC)
$(EXEC): $(OBJECTS)
	cc $(CFLAGS) $^ -o $@
main.o : main.c
	cc $(CFLAGS) -c main.c 
ft_atoi_error.o : ft_atoi_error.c
	cc $(CFLAGS) -c ft_atoi_error.c
ft_strchr.o : ft_strchr.c
	cc $(CFLAGS) -c ft_strchr.c
read.o : read.c
	cc $(CFLAGS) -c read.c
write.o : write.c
	cc $(CFLAGS) -c write.c
make_structs.o : make_structs.c
	cc $(CFLAGS) -c make_structs.c
validate_maps.o : validate_maps.c
	cc $(CFLAGS) -c validate_maps.c
find_solution.o : find_solution.c
	cc $(CFLAGS) -c find_solution.c
choose_answer.o : choose_answer.c
	cc $(CFLAGS) -c choose_answer.c
clean : 
	rm -f $(OBJECTS) bsq.h.gch
fclean : clean
	rm -f bsq
re : fclean all
.PHONY : all clean fclean re
