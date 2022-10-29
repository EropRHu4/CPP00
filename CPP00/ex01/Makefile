NAME	=	phonebook

SRC		=	src/main.cpp \
			src/PhoneBook.cpp \
			src/Contact.cpp

HDR		=	inc/PhoneBook.hpp \
			inc/Contact.hpp

OBJ 	=	$(SRC:.cpp=.o)

CC		=	g++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ) $(HDR)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)
			@echo $(GRN) "\tCompiled "$(NAME)" successfully!" $(END)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re test