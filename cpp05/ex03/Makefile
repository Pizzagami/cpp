NAME = Bureaucratie

SRCS =	./Bureaucrat.cpp				\
		./AForm.cpp						\
		./ShrubberyCreationForm.cpp		\
		./RobotomyRequestForm.cpp		\
		./PresidentialPardonForm.cpp	\
		./Intern.cpp					\
		./main.cpp

FSANITIZE = -fsanitize=address -g3

CXXFLAGS = -Wall -Wextra -Werror

CXX = clang++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)
	rm maison

re: fclean all
	${RM} $(OBJS)

.PHONY: all clean fclean re lib
