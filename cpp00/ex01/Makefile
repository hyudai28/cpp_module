NAME := phonebook

CC := g++

CFLAGS := -Wall -Werror -Wextra

SRCS := phonebook.cpp
SRCS += contact.cpp
SRCS += message.cpp
SRCS += search.cpp
SRCS += table.cpp

OBJS := ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: clean
			rm -rf $(NAME)

re: fclean all

bonus: $(NAME)

.PHONY: all clean fclean re
