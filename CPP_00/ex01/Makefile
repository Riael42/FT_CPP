NAME = myAwesomePhoneBook
CPP = c++
FLAGS = -Werror -Wextra -Wall #-std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(SRC) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re
