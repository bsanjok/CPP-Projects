CC = c++ -Wall -Wextra -Werror -std=c++98

NAME = account
SRC = ./Account.cpp ./tests.cpp
OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re