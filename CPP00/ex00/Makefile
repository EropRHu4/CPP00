SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= g++
RM				= rm -f
FLAGS		= -Wall -Wextra -Werror -I.

NAME			= megaphone

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re