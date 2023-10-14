CC = c++ -Wall -Wextra -Werror -std=c++98

NAME = ex02
SRC = ./Fixed.cpp ./main.cpp
OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) -c -o $@ $<

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re