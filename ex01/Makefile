CC = c++ -Wall -Wextra -Werror -std=c++98

NAME = myphonebook
SRC = ./Contact.cpp ./main.cpp ./PhoneBook.cpp
OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re