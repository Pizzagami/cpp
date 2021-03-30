NAME = find

SRCS =	./main.cpp

FSANITIZE = -fsanitize=address

CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98 -pedantic

CXX = clang++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)

re: fclean all
	${RM} $(OBJS)

.PHONY: all clean fclean re lib
