NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

RM = rm -f

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean
