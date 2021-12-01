NAME := Aaaaaaaand....._OPEN!

CXX := clang++

CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

SRCS := main.cpp
SRCS += ClapTrap.cpp

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
