NAME = Materia

LIB = 

SRCS =	./AMateria.cpp			\
		./Character.cpp			\
		./Cure.cpp				\
		./Fire.cpp				\
		./Ice.cpp				\
		./MateriaSource.cpp		\
		./main.cpp

FLAG = 
FSANITIZE = -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

CC = clang++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(FLAG) $(OBJS)

lib:
	make -C ./includes/libft re
	make -C ./includes/libft clean
clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)

re: fclean all
	${RM} $(OBJS)

.PHONY: all clean fclean re lib
