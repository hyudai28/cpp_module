NAME := catAndDogHasABrain

CXX := c++

CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

SRCS := main.cpp
SRCS += Animal.cpp
SRCS += Dog.cpp
SRCS += Cat.cpp
SRCS += Brain.cpp


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
