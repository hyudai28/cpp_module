NAME := job_quest

CXX := c++

CXXFLAGS := -std=c++98 #-Wall -Werror -Wextra

SRCS := test.cpp
SRCS += Account.cpp

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
