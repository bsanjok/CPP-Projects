CC = c++ -Wall -Wextra -Werror=implicit-fallthrough=0 -std=c++98

NAME = harlFilter
SRC = ./main.cpp ./Harl.cpp
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