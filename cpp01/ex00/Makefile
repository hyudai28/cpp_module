NAME := Zombie

CXX := clang++

CXXFLAGS := -Wall -Werror -Wextra

SRCS := main.cpp
SRCS += Zombie.cpp
SRCS += newZombie.cpp
SRCS += randomChump.cpp

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
