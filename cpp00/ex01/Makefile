NAME = phonebook

LIB = 

SRCS =	./main.cpp  	\
		./contact.class.cpp	\

FLAG = 
FSANITIZE = -fsanitize=address -g3
CXXFLAGS = -Wall -Wextra -Werror

CXX = clang++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(FLAG) $(OBJS)

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)

re: fclean all
	${RM} $(OBJS)

.PHONY: all clean fclean re lib
