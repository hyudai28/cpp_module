NAME := bureaucrat

CXX := c++

CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

SRCS := main.cpp
SRCS += Bureaucrat.cpp
SRCS += Form.cpp
SRCS += RobotomyRequestForm.cpp
SRCS += ShrubberyCreationForm.cpp
SRCS += PresidentialPardonForm.cpp


OBJS := ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: clean
			rm -rf $(NAME)

re: fclean all

bonus: $(NAME)

.PHONY: all clean fclean re
