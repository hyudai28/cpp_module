NAME := Unnecessary_violence

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra

SRCS := main.cpp
SRCS += HumanA.cpp
SRCS += HumanB.cpp
SRCS += Weapon.cpp

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